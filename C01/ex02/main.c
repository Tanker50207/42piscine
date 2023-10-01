#include <unistd.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int c = 49;
	int d = 57;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	ft_swap(&c, &d);
	write(1, &c, 1);
	write(1, &d, 1);
	return (0);
}
