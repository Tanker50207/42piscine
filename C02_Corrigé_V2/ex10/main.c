#include <stdio.h>
#include <unistd.h>
#include <strings.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char list[7];
	char *str = list;
	unsigned char nbr;

	nbr = ft_strlcpy(str, "Bonjouw", 8) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	nbr = ft_strlcpy(str, "Mal", 8) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	nbr = ft_strlcpy(str, "Bonjour", 5) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	write(1, "\n", 1);
	nbr = strlcpy(str, "Bonjouw", 8) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	nbr = strlcpy(str, "Mal", 8) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	nbr = strlcpy(str, "Bonjour", 5) + 48;
	write(1, str, 8);
	printf("\n%c\n", nbr);
	return (0);
}