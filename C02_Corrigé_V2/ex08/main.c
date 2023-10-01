#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char var[] = "Bonjour a TouS! @@";
	char *e;

	e = ft_strlowcase(var);
	printf("%s", e);
	return (0);
}
