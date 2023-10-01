#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char var[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(var);
	printf("%s", var);
	return (0);
}
