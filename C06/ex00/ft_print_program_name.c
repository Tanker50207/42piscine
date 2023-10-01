/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:38:27 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/22 11:39:25 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	(void) argc;
	count = 0;
	while (argv[0][count] != '\0')
		write(1, &argv[0][count++], 1);
	write(1, "\n", 1);
	return (0);
}
