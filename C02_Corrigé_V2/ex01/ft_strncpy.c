/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:51:23 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 16:23:59 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0')
	{
		if (count < n)
			dest[count] = src[count];
		count++;
	}
	while (count < n)
		dest[count++] = '\0';
	return (dest);
}
