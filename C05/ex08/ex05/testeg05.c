/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:14:55 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/21 11:33:07 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int	main(void)
{
	int	retval;

	if ((retval = ft_sqrt(278770)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 278801 \n", retval);
	if ((retval = ft_sqrt(-1)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m1 Test Failed -1: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(0)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m2: Test Failed 0: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(1)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m 3: Test Failed 1: %d should be 1 \n", retval);
	if ((retval = ft_sqrt(4)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m5: Test Failed 4: %d should be 2 \n", retval);
	if ((retval = ft_sqrt(2)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m6: Test Failed: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(9)) == 3)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m7: Test Failed: %d should be 3 \n", retval);
	if ((retval = ft_sqrt(81)) == 9)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m8: Test Failed: %d should be 9 \n", retval);
	if ((retval = ft_sqrt(37)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m9: Test Failed: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(5)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m10: Test Failed: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(3697)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31m11: Test Failed: %d should be 0 \n", retval);
	if ((retval = ft_sqrt(10000)) == 100)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 100 \n", retval);
	return (0);
}
