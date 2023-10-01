#include <stdio.h>

int ft_str_is_numeric(char *str);

void print_success(int i)
{
	if (i == 1)
		printf("Yes!");
	else
		printf("No");
}
int main(void)
{
	print_success(ft_str_is_numeric("0"));
	print_success(ft_str_is_numeric("9"));
	print_success(ft_str_is_numeric("/"));
	print_success(ft_str_is_numeric(":"));
	print_success(ft_str_is_numeric(""));
	print_success(ft_str_is_numeric(" ..( as1dg@[`{"));
	return (0);
}
