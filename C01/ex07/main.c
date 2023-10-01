#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tab2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int count = 0;

	printf("10 array original: ");
	while(count < 10)
		printf("%d, ", tab1[count++]);
	count = 0;
	ft_rev_int_tab(tab1, 10);
	printf("\n10 array reversed: ");
	while(count < 10)
		printf("%d, ", tab1[count++]);
	count = 0;
	printf("\n11 array original: ");
	while(count < 11)
		printf("%d, ", tab2[count++]);
	count = 0;
	ft_rev_int_tab(tab2, 11);
	printf("\n11 array reversed: ");
	while(count < 11)
		printf("%i, ", tab2[count++]);
	return (0);
}