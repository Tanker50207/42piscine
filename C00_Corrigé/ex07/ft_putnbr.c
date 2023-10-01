/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:23:17 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/13 14:05:12 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	current_figure;
	int	current_position;

	current_position = 1000000000;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	current_figure = nb / current_position;
	while (current_figure == 0 && current_position != 0)
	{
		current_position /= 10;
		current_figure = nb / current_position;
	}
	while (current_position > 1)
	{
		nb -= current_figure * current_position;
		current_figure += 48;
		write(1, &current_figure, 1);
		current_position /= 10;
		current_figure = nb / current_position;
	}
	current_figure += 48;
	write(1, &current_figure, 1);
}
