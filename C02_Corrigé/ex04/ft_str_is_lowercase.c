/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:29:41 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 17:58:55 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!('a' <= str[count] && str[count] <= 'z'))
			return (0);
		count++;
	}
	return (1);
}
