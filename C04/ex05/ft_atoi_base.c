/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:11:44 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 19:11:51 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Branchless!!! :fear:
//if count is odd count % 2 = 1 so 1 + -2 = -1
//if count is even count % 2 = 0 so 1 + 0 = 1
//also makes str skip to the first character after the + or -
int	get_sign(char **str)
{
	int	count;

	count = 0;
	while (**str == '\n' || **str == '\t' || **str == '\v' || **str == '\f'
		|| **str == '\r' || **str == ' ')
		*str += 1;
	while (**str == '+' || **str == '-')
	{
		count += (**str == '-');
		*str += 1;
	}
	return (1 + (-2 * (count % 2)));
}

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

int	get_value(char *str, char *base, int *stop, int itteration)
{
	int	count;

	count = 0;
	while (*str != base[count] && base[count] != '\0')
	{
		count++;
	}
	if (count == ft_strlen(base) || !*stop)
	{
		*stop = 0;
		itteration = 0;
	}
	if (itteration)
		get_value(str + 1, base, stop, 0);
	return (count);
}

int	is_valid_base(char *base)
{
	int	first_compare;
	int	next_compare;

	first_compare = 0;
	while (first_compare < ft_strlen(base))
	{
		next_compare = first_compare + 1;
		while (next_compare < ft_strlen(base))
		{
			if (base[first_compare] == base[next_compare]
				|| base[first_compare] == '+' || base[first_compare] == '-'
				|| base[first_compare] == '\n' || base[first_compare] == '\t'
				|| base[first_compare] == '\v' || base[first_compare] == '\f'
				|| base[first_compare] == '\r' || base[first_compare] == ' '
				|| base[next_compare] == '+' || base[next_compare] == '-'
				|| base[next_compare] == '\n' || base[next_compare] == '\t'
				|| base[next_compare] == '\v' || base[next_compare] == '\f'
				|| base[next_compare] == '\r' || base[next_compare] == ' ')
				return (0);
			next_compare++;
		}
		first_compare++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		count;
	long	final;
	int		sign;
	int		stop;

	final = 0;
	count = 0;
	sign = get_sign(&str);
	stop = is_valid_base(base);
	get_value(str, base, &stop, 0);
	while (stop && str[count] != '\0')
	{
		final *= ft_strlen(base);
		final += get_value(&str[count++], base, &stop, 1);
	}
	final *= sign;
	return (final);
}
