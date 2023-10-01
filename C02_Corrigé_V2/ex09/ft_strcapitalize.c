/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:25:34 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 11:26:00 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char str)
{
	if ('0' <= str && str <= '9')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char str)
{
	if ('A' <= str && str <= 'Z')
		return (1);
	if ('a' <= str && str <= 'z')
		return (2);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_str_is_alpha(str[count]) == 1)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	ft_strlowcase(str);
	if (ft_str_is_alpha(str[0]) == 2)
	{
		str[0] -= 32;
	}
	count = 1;
	while (str[count] != '\0')
	{
		if (ft_str_is_alpha(str[count - 1]) == 0
			&& ft_str_is_numeric(str[count - 1]) == 0
			&& ft_str_is_alpha(str[count]) == 2)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
