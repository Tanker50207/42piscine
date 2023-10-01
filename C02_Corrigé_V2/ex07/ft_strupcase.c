/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:42:11 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 10:45:09 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if ('a' <= *str && *str <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (ft_str_is_lowercase(&str[count]) == 1)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
