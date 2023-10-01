/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:29:05 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 17:56:56 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!('A' <= str[count] && str[count] <= 'Z') && !('a' <= str[count]
				&& str[count] <= 'z'))
			return (0);
		count++;
	}
	return (1);
}
