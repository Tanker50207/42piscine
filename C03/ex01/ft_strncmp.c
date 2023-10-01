/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:15:40 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/20 13:15:47 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*s1_hold;
	unsigned char	*s2_hold;
	unsigned int	count;

	count = 0;
	s1_hold = (unsigned char *) s1;
	s2_hold = (unsigned char *) s2;
	while (s1_hold[count] == s2_hold[count] && s1_hold[count] != '\0'
		&& s2_hold[count] != '\0' && count < n)
		count++;
	if (count == n)
		return (0);
	if (s1_hold[count] > s2_hold[count])
		return (1);
	if (s1_hold[count] < s2_hold[count])
		return (-1);
	return (0);
}
