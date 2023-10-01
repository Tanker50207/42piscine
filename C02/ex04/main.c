#include <stdio.h>

int ft_str_is_lowercase(char *str);

void print_success(int i)
{
	if (i == 1)
		printf("Yes!");
	else
		printf("No");
}
int main(void)
{
	print_success(ft_str_is_lowercase("a"));
	print_success(ft_str_is_lowercase("z"));
	print_success(ft_str_is_lowercase("`"));
	print_success(ft_str_is_lowercase("{"));
	print_success(ft_str_is_lowercase(""));
	print_success(ft_str_is_lowercase(" ..( 12a345@[`{"));
	return (0);
}
