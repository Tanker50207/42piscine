/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:06:28 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/25 11:06:31 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count++], 1);
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*s1_hold;
	unsigned char	*s2_hold;
	unsigned int	count;

	count = 0;
	s1_hold = (unsigned char *) s1;
	s2_hold = (unsigned char *) s2;
	while (s1_hold[count] == s2_hold[count] && s1_hold[count] != '\0'
		&& s2_hold[count] != '\0')
		count++;
	if (s1_hold[count] > s2_hold[count])
		return (1);
	if (s1_hold[count] < s2_hold[count])
		return (-1);
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count++]);
	}
}

int	main(int argc, char **argv)
{
	int		pos;
	char	*t_val;
	char	**hold;

	if (argc < 2)
		return (0);
	hold = argv;
	pos = 2;
	while (pos < argc)
	{
		if (ft_strcmp(hold[pos], hold[pos - 1]) == -1)
		{
			t_val = hold[pos];
			hold[pos] = hold[pos - 1];
			hold[pos - 1] = t_val;
			if (pos == 2)
				pos++;
			else
				pos--;
		}
		else
			pos++;
	}
	ft_print_params(argc, hold);
}
