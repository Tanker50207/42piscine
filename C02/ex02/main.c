#include <stdio.h>

int ft_str_is_alpha(char *str);

void print_success(int i)
{
	if (i == 1)
		printf("Yes!");
	else
		printf("No");
}
int main(void)
{
	print_success(ft_str_is_alpha("A"));
	print_success(ft_str_is_alpha("Z"));
	print_success(ft_str_is_alpha("a"));
	print_success(ft_str_is_alpha("z"));
	print_success(ft_str_is_alpha(""));
	print_success(ft_str_is_alpha(" ..(A 3122@[`{"));
	return (0);
}
