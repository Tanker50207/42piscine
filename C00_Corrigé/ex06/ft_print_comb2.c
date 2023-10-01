/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:07:01 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 14:05:47 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write2(int number)
{
	int	figure1;
	int	figure2;

	figure1 = (number / 10) + 48;
	figure2 = (number % 10) + 48;
	write(1, &figure1, 1);
	write(1, &figure2, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 < 98)
	{
		number2 = number1 + 1;
		while (number2 < 100)
		{
			write2(number1);
			write(1, " ", 1);
			write2(number2);
			write(1, ", ", 2);
			number2++;
		}
		number1++;
	}
	write2(98);
	write(1, " ", 1);
	write2(99);
}
