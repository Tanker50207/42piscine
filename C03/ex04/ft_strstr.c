/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:08:57 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 11:08:58 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_needle(char *haystack, char *needle)
{
	unsigned int	count;

	count = 0;
	while (needle[count] == haystack[count])
	{
		if (needle[++count] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	count;

	count = 0;
	if (*to_find == '\0')
		return (str);
	while (str[count] != '\0')
	{
		if (ft_is_needle(&str[count], to_find))
			return (&str[count]);
		count++;
	}
	return (0);
}
