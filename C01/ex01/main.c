#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a;
	int *b;
	int **c;
	int ***d;
	int ****e;
	int *****f;
	int ******g;
	int *******h;
	int ********i;
	a = 45;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	write(1, &a, 1);
	ft_ultimate_ft(&i);
	write(1, &a, 1);
	return(0);
}
