/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:53:40 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/13 11:10:56 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	number;
	int	digit1;
	int	digit2;
	int	digit3;

	number = 0;
	while (number < 690)
	{
		number++;
		digit1 = (number / 100);
		digit2 = (number / 10) - (digit1 * 10) + 48;
		digit3 = (number % 10) + 48;
		digit1 += 48;
		if (digit1 != digit2 && digit2 != digit3 && 
			digit1 < digit2 && digit2 < digit3)
		{
			write(1, &digit1, 1);
			write(1, &digit2, 1);
			write(1, &digit3, 1);
			write(1, ", ", 2);
		}
	}
	write(1, "789", 3);
}
