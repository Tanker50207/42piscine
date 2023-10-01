/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:53:59 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 13:54:20 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbr;
	int		current_figure;
	int		current_position;

	nbr = (long) nb;
	current_position = 1000000000;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr / current_position == 0 && current_position != 1)
		current_position /= 10;
	current_figure = nbr / current_position;
	while (current_position > 1)
	{
		nbr -= current_figure * current_position;
		current_figure += 48;
		write(1, &current_figure, 1);
		current_position /= 10;
		current_figure = nbr / current_position;
	}
	current_figure += 48;
	write(1, &current_figure, 1);
}
