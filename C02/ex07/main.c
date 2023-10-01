#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char var[] = "Bonjour a TouS! @@";

	ft_strupcase(var);
	printf("%s", var);
	return (0);
}