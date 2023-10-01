#include <unistd.h>
#include <strings.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char str[7];

	ft_strncpy(str, "Bonjour", 7);
	write(1, str, 7);
	ft_strncpy(str, "Mal", 7);
	write(1, str, 7);
	ft_strncpy(str, "Bonjour", 3);
	write(1, str, 7);
	write(1, "\n", 1);
	strncpy(str, "Bonjour", 7);
	write(1, str, 7);
	strncpy(str, "Mal", 7);
	write(1, str, 7);
	strncpy(str, "Bonjour", 3);
	write(1, str, 7);
	return (0);
}
