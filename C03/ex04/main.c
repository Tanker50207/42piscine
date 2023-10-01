#include <strings.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char test[] = "Bonjoué\n";

	printf("%s", ft_strstr(test, "é"));
	printf("%s", ft_strstr(test, ""));
	printf("%s", ft_strstr(test, "non"));
	printf("\n");
	printf("%s", strstr(test, "é"));
	printf("%s", strstr(test, ""));
	printf("%s", strstr(test, "non"));
	return (0);
}