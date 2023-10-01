/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:53:36 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/22 11:53:38 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count++], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count++]);
	}
}
