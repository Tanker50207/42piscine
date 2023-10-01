/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:14:55 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/20 15:28:54 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int	main(void)
{
	int	retval;

	if ((retval = ft_fibonacci(-1)) == -1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be -1 \n", retval);
	if ((retval = ft_fibonacci(0)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 0 \n", retval);
	if ((retval = ft_fibonacci(1)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_fibonacci(2)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 1 \n", retval);
	if ((retval = ft_fibonacci(3)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 2 \n", retval);
	if ((retval = ft_fibonacci(5)) == 5)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 5 \n", retval);
	if ((retval = ft_fibonacci(10)) == 55)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 55 \n", retval);
	if ((retval = ft_fibonacci(25)) == 75025)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: %d should be 55 \n", retval);
	return (0);
}
