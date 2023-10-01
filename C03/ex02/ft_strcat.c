/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:49:10 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/19 16:49:12 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	if (src[0] == '\0')
	{
		dest[0] = '\0';
		return (dest);
	}
	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
		if (src[count] == '\0')
			dest[count] = '\0';
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	ft_strcpy(&dest[count], src);
	return (dest);
}
