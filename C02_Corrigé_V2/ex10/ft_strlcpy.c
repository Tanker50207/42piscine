/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:19:11 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 12:19:18 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	if (size == 0)
		return (0);
	count = 0;
	while (src[count] != '\0')
	{
		if (count == size - 1)
		{
			dest[count] = '\0';
		}
		else if (count < size)
			dest[count] = src[count];
		count++;
	}
	if (count < size)
	{
		dest[count] = '\0';
	}
	return (count);
}
