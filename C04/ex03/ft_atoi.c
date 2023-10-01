/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:56:33 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 14:56:34 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*skip_whitespaces(char *str)
{
	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	return (str);
}

//Branchless!!! :fear:
//if count is odd count % 2 = 1 so 1 + -2 = -1
//if count is even count % 2 = 0 so 1 + 0 = 1
//also makes str skip to the first character after the + or -
int	get_sign(char **str)
{
	int	count;

	count = 0;
	while (**str == '+' || **str == '-')
	{
		count += (**str == '-');
		*str += 1;
	}
	return (1 + (-2 * (count % 2)));
}

int	ft_atoi(char *str)
{
	int		count;
	long	final;
	int		sign;

	final = 0;
	count = 0;
	str = skip_whitespaces(str);
	sign = get_sign(&str);
	while ('0' <= str[count] && str[count] <= '9')
		final = (final * 10) + str[count++] - 48;
	final *= sign;
	return (final);
}
