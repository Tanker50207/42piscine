/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@fastmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:35:31 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/20 16:40:18 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	retval;

	if ((retval = ft_recursive_factorial(-1)) == 0)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest n < 0 return 0 Failed: \n");
	if ((retval = ft_recursive_factorial(1)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest factorial(1) == 1 Failed: \n");
	if ((retval = ft_recursive_factorial(0)) == 1)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest factorial(0) == 1 Failed: \n");
	if ((retval = ft_recursive_factorial(2)) == 2)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: 2 \n");
	if ((retval = ft_recursive_factorial(3)) == 6)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: 3 \n");
	if ((retval = ft_recursive_factorial(8)) == 40320)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: 8 \n");
	if ((retval = ft_recursive_factorial(12)) == 479001600)
		printf("\e[0;32mTest Passed\n");
	else
		printf("\e[0;31mTest Failed: 12 \n");
	return (0);
}
