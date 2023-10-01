/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:00:31 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/20 16:40:57 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	a;
	int	retval;

	a = 4;
	if ((retval = ft_recursive_power(a, 2)) == 16)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 16 \n", retval);
	if ((retval = ft_recursive_power(21, 4)) == 194481)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 194481 \n", retval);
	if ((retval = ft_recursive_power(1, -1)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed 1^-1: %d should be 0 \n", retval);
	if ((retval = ft_recursive_power(0, 0)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed 0^0: %d should be 1 \n", retval);

	if ((retval = ft_recursive_power(3, 0)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed 3^0: %d should be 1 \n", retval);

	if ((retval = ft_recursive_power(-3, 0)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed -3^0: %d should be 1 \n", retval);
	if ((retval = ft_recursive_power(13, 1)) == 13)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed 3^0: %d should be 1 \n", retval);
	if ((retval = ft_recursive_power(0, 3)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed 0^3: %d should be 0 \n", retval);
	return (0);
}
