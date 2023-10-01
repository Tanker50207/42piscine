/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:27:41 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 15:28:17 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;
	int	sqrt;
	int	count;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	count = 0;
	guess = nb / 2;
	while (count++ <= 21)
	{
		sqrt = (guess + (nb / guess)) / 2;
		guess = sqrt;
	}
	if (guess * guess == nb)
		return (guess);
	return (0);
}
