#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int count = 0;

	printf("Before: ");
	while (count < 14)
		printf("%i, ", tab[count++]);
	ft_sort_int_tab(tab, 14);
	printf("\nAfter: ");
	count = 0;
	while (count < 14)
		printf("%i, ", tab[count++]);
	return (0);
}
