#include <stdio.h>
#include <unistd.h>
#include <strings.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char list[7];
	char *str = list;

	ft_strlcpy(str, "Bonjoué", 8);
	write(1, str, 8);
	ft_strlcpy(str, "Mal", 8);
	write(1, str, 8);
	ft_strlcpy(str, "Bonjour", 5);
	write(1, str, 8);
	write(1, "\n", 1);
	strlcpy(str, "Bonjoué", 8);
	write(1, str, 8);
	strlcpy(str, "Mal", 8);
	write(1, str, 8);
	strlcpy(str, "Bonjour", 5);
	write(1, str, 8);
	return (0);
}