/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:06:06 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 12:03:02 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	val_bottom;
	int	val_top;

	count = 0;
	while (count < size / 2)
	{
		val_bottom = tab[count];
		val_top = tab[size - count - 1];
		tab[count] = val_top;
		tab[size - count - 1] = val_bottom;
		count++;
	}
}
