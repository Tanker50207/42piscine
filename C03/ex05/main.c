#include <stdio.h>
#include <unistd.h>
#include <strings.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char test[] = "Bon";
	char *str = test;
	unsigned char nbr;

	strncpy(str, "Bon", 12);
	nbr = ft_strlcat(str, "joué", 8) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = ft_strlcat(str, "maljou", 10) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = ft_strlcat(str, "jour", 10) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = ft_strlcat(str, "jour", 7) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	write(1, "\n", 1);

	strncpy(str, "Bon", 12);
	nbr = strlcat(str, "joué", 8) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = strlcat(str, "maljou", 10) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = strlcat(str, "jour", 10) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	nbr = strlcat(str, "jour", 7) + 48;
	write(1, str, 12);
	write(1, "\n", 1);
	printf("\n%c\n", nbr);
	return (0);
}
