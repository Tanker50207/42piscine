/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:53:58 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 15:54:30 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	count;

	if (nb < 2)
		return (0);
	count = 2;
	while (count * count <= nb)
		if (nb % count++ == 0)
			return (0);
	return (1);
}
