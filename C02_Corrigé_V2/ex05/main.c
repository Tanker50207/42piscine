#include <stdio.h>

int ft_str_is_uppercase(char *str);

void print_success(int i)
{
	if (i == 1)
		printf("Yes!");
	else
		printf("No");
}
int main(void)
{
	print_success(ft_str_is_uppercase("A"));
	print_success(ft_str_is_uppercase("Z"));
	print_success(ft_str_is_uppercase("@"));
	print_success(ft_str_is_uppercase("["));
	print_success(ft_str_is_uppercase(""));
	print_success(ft_str_is_uppercase(" ..( 123A45@[`{"));
	return (0);
}
