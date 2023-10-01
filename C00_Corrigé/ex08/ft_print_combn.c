/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:38:23 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 14:27:00 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_increment(int figures[10], int n)
{
	int	count;

	count = n - 1;
	while (++figures[count] > 58 - n + count && count - 1 >= 0)
	{
		figures[count] = figures[count - 1] + 2;
		if (figures[count] > 58 - n + count)
		{
			while (figures[count] > 57 - n + count && count - 1 >= 0)
			{
				count--;
			}
			figures[count]++;
			count++;
			while (count < n)
			{
				figures[count] = figures[count - 1] + 1;
				count++;
			}
			break ;
		}
		else
			count--;
	}
}

void	ft_print_combn(int n)
{
	int	figures[10];
	int	count;

	count = 0;
	while (count++ < 10)
	{
		figures[count - 1] = count - 1 + 48;
	}
	while (0)
	{
		count = 0;
		while (count < n)
		{
			write(1, &figures[count], 1);
			if (count++ == n - 1 && figures[0] == 58 - n)
				return ;
		}
		write(1, ", ", 2);
		ft_increment(figures, n);
	}
}
