/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:17:07 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/21 15:17:09 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	current;
	int	last;
	int	pre;

	if (index < 0)
		return (-1);
	current = 0;
	last = 1;
	while (index-- > 0)
	{
		pre = last;
		last = current;
		current = pre + last;
	}
	return (current);
}
