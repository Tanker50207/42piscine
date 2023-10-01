/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:31:35 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/17 17:57:34 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!('0' <= str[count] && str[count] <= '9'))
			return (0);
		count++;
	}
	return (1);
}
