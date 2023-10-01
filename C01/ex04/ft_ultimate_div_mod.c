/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:19:01 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/15 12:19:03 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	*a = a_val / b_val;
	*b = a_val % b_val;
}
