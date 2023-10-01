/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:45:55 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 14:45:56 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	hold;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	count = 2;
	hold = nb;
	while (count < hold)
		nb *= count++;
	return (nb);
}
