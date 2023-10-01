#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int var1 = 4253;
	int var2 = 100;
	ft_div_mod(var1, var2, &var1, &var2);
	write(1, &var1, 2);
	write(1, &var2, 2);
	return (0);
}