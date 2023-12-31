/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:07:54 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 15:08:08 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	hold;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	count = 0;
	hold = nb;
	while (++count < power)
		nb *= hold;
	return (nb);
}
