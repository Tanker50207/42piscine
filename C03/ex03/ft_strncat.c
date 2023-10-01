/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:12:00 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/19 18:12:03 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int nb)
{
	unsigned int	destcount;
	unsigned int	srccount;

	if (src[0] == '\0')
	{
		dest[0] = '\0';
		return (dest);
	}
	destcount = 0;
	srccount = 0;
	while (src[srccount] != '\0')
	{
		if (destcount == nb)
			dest[destcount++] = '\0';
		dest[destcount++] = src[srccount++];
	}
	dest[destcount] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	ft_strncpy(&dest[count], src, nb);
	return (dest);
}
