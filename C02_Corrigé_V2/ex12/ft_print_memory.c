/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcrepin <gcrepin@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:01:45 by gcrepin           #+#    #+#             */
/*   Updated: 2023/09/18 13:01:46 by gcrepin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	get_hex(char nbr)
{
	if (nbr < 10)
		nbr += 48;
	else
		nbr += 87;
	return (nbr);
}

void	print_ptr(void *ptr)
{
	unsigned long	ptr_value;
	int				ptr_count;
	char			ptr_char[16];

	ptr_count = 0;
	ptr_value = (unsigned long) ptr;
	while (ptr_count < 16)
	{
		ptr_char[ptr_count++] = get_hex(ptr_value & 0xf);
		ptr_value = ptr_value >> 4;
	}
	while (--ptr_count >= 0)
		write(1, &ptr_char[ptr_count], 1);
	write(1, ": ", 2);
}

void	ft_puthex(unsigned int c)
{
	char	digit;

	c = c & 0xff;
	digit = c / 16;
	digit = get_hex(digit);
	write(1, &digit, 1);
	digit = c % 16;
	digit = get_hex(digit);
	write(1, &digit, 1);
}

void	ft_put_hex_contents(char *ptr, int ptr_count, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count++ < 8)
	{
		ft_puthex(*ptr);
		ptr++;
		if ((count * 2) - 1 + (ptr_count * 16) >= size)
			break ;
		ft_puthex(*ptr);
		ptr++;
		write(1, " ", 1);
		if ((count * 2) + (ptr_count * 16) >= size)
			break ;
	}
	count = 0;
	while (ptr_count == size / 16 && 16 - (size % 16) > count)
	{
		if ((size % 16 + count) % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		count++;
	}
	if (ptr_count == size / 16 && size % 2 == 1)
		write(1, " ", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	ptr_count;
	char			*ptr;
	int				count;

	ptr_count = 0;
	ptr = (char *)addr;
	while (ptr_count < size / 16 || (ptr_count == size / 16 && size % 16 != 0))
	{
		print_ptr(ptr);
		ft_put_hex_contents(ptr, ptr_count, size);
		count = 0;
		while (count < 16 && count + (ptr_count * 16) < size)
		{
			if (' ' <= *ptr && *ptr <= '~')
				write(1, ptr, 1);
			else
				write(1, ".", 1);
			count++;
			ptr += 1;
		}
		write(1, "\n", 1);
		ptr_count++;
	}
	return (addr);
}
