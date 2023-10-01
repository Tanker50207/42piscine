/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:14:55 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/21 11:09:52 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int		ft_find_next_prime(int nb);

int	main(void)
{
	int	retval;

	if ((retval = ft_find_next_prime(278770)) == 278801)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 278801 \n", retval);
	if ((retval = ft_find_next_prime(-3280)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_find_next_prime(-5)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_find_next_prime(0)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_find_next_prime(1)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_find_next_prime(2)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_find_next_prime(4)) == 5)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 5 \n", retval);
	if ((retval = ft_find_next_prime(17)) == 17)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 17 \n", retval);
	if ((retval = ft_find_next_prime(90)) == 97)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 97 \n", retval);
	if ((retval = ft_find_next_prime(1734)) == 1741)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1741 \n", retval);
	if ((retval = ft_find_next_prime(2028)) == 2029)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2029 \n", retval);
	if ((retval = ft_find_next_prime(2028)) == 2029)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2029 \n", retval);
	printf("\e[0;0m");
	return (0);
}
