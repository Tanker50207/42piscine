/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:33:14 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 12:33:16 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (' ' <= str && str <= '~')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	int	digit;

	write(1, "\\", 1);
	digit = c / 16;
	if (digit < 10)
		digit += 48;
	else
		digit += 87;
	ft_putchar(digit);
	digit = c % 16;
	if (digit < 10)
		digit += 48;
	else
		digit += 87;
	ft_putchar(digit);
}

void	ft_putstr_non_printable(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!ft_str_is_printable(str[count]))
			ft_puthex(str[count]);
		else
			ft_putchar(str[count]);
		count++;
	}
}
