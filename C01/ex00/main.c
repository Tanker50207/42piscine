#include <unistd.h>
void ft_ft(int *nbr);

int main(void)
{
	int a = 46;
	write(1, &a, 1);
	ft_ft(&a);
	write(1, &a, 1);
	return (0);
}
