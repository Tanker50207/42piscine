/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:25:34 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 11:26:00 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if ('A' <= *str && *str <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_str_is_uppercase(&str[count]) == 1)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
