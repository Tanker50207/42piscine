#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int var1 = 4253;
	int var2 = 100;
	ft_ultimate_div_mod(&var1, &var2);
	write(1, &var1, 2);
	write(1, &var2, 2);
	return (0);
}