/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:31:47 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 12:31:49 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

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
	if (size == 0)
		return (count - 1);
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	if (size <= count)
		return (size + ft_strlen(src));
	return (ft_strlcpy(&dest[count], src, size - count) + count);
}
