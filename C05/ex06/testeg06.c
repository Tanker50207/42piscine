/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:14:55 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/21 11:12:41 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int	main(void)
{
	int	retval;
	if ((retval = ft_is_prime(278770)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(-1)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(0)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(1)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(3)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 3 \n", retval);
	if ((retval = ft_is_prime(2)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_is_prime(4)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(113)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_is_prime(599)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_is_prime(17)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_is_prime(90)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(1734)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(2028)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_is_prime(1381)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_is_prime(7829)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	return (0);
}
