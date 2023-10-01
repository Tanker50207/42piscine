/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:01:13 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 18:01:14 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	is_valid_base(char *base)
{
	int	size;
	int	first_compare;
	int	next_compare;

	size = ft_strlen(base);
	first_compare = 0;
	while (first_compare < size)
	{
		next_compare = first_compare + 1;
		while (next_compare < size)
		{
			if (base[first_compare] == base[next_compare]
				|| base[first_compare] == '+' || base[first_compare] == '-'
				|| base[next_compare] == '+' || base[next_compare] == '-')
				return (0);
			next_compare++;
		}
		first_compare++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	pass;

	size = is_valid_base(base);
	if (size == 0 || size == 1)
		return ;
	pass = (long) nbr;
	if (pass < 0)
	{
		write(1, "-", 1);
		pass *= -1;
	}
	if (pass / size != 0)
		ft_putnbr_base(pass / size, base);
	write(1, &base[pass % size], 1);
}
