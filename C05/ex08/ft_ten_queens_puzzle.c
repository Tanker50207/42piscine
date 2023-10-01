/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:02:40 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 17:03:11 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_board(int board[10][11], int row)
{
	int	count;
	int	hold;

	count = 0;
	while (count < 9)
	{
		hold = board[count++][10] + 48;
		write(1, &hold, 1);
	}
	row += 48;
	write(1, &row, 1);
	write(1, "\n", 1);
}

void	uncross(int board[10][11], int position)
{
	int	x;
	int	y;

	x = position + 1;
	y = board[position][10];
	while (x < 10 && y != 'e')
	{
		if (y - position + x < 10 && board[x][y - position + x] == position)
			board[x][y - position + x] = 'e';
		if (board[x][y] == position)
			board[x][y] = 'e';
		if (y + position - x >= 0 && board[x][y + position - x] == position)
			board[x][y + position - x] = 'e';
		x++;
	}
}

void	cross(int board[10][11], int position, int row)
{
	int	x;

	uncross(board, position);
	x = position + 1;
	board[position][10] = row;
	while (x < 10 && row != 'e')
	{
		if (row - position + x < 10 && board[x][row - position + x] == 'e')
			board[x][row - position + x] = position;
		if (board[x][row] == 'e')
			board[x][row] = position;
		if (row + position - x >= 0 && board[x][row + position - x] == 'e')
			board[x][row + position - x] = position;
		x++;
	}
}

int	answer(int board[10][11], int position)
{
	int	row;
	int	possibilities;

	possibilities = 0;
	row = 0;
	while (row < 10)
	{
		if (board[position][row] == 'e')
		{
			if (position == 9)
			{
				write_board(board, row);
				possibilities += 1;
			}
			else
			{
				cross(board, position, row);
				possibilities += answer(board, position + 1);
			}
		}
		row++;
	}
	cross(board, position, 'e');
	return (possibilities);
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	y;
	int	board[10][11];

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 11)
		{
			board[x][y] = 'e';
			y++;
		}
		x++;
	}
	return (answer(board, 0));
}
