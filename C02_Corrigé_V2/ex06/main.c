#include <stdio.h>

int ft_str_is_printable(char *str);

void print_success(int i)
{
	if (i == 1)
		printf("Yes!");
	else
		printf("No");
}
int main(void)
{
	print_success(ft_str_is_printable("A"));
	print_success(ft_str_is_printable("Z"));
	print_success(ft_str_is_printable("@"));
	print_success(ft_str_is_printable("["));
	print_success(ft_str_is_printable(""));
	print_success(ft_str_is_printable("d\n\r\t\b\f"));
	return (0);
}
