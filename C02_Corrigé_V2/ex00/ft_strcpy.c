/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:40:34 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 15:42:43 by gcrepin          ###   ########.fr       */
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
