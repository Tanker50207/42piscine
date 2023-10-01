#include <stdio.h>
#include <strings.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("%i\n", ft_strcmp("aa\200", "aa\0"));
	printf("%i\n", ft_strcmp("\0", "\200"));
	printf("%i\n", ft_strcmp("", ""));
	printf("%i\n", ft_strcmp("abcdef", "abcdef"));
	printf("%i\n\n", ft_strcmp("abcdefab", "abcdefaba"));
	
	printf("%i\n", strcmp("aa\200", "aa\0"));
	printf("%i\n", strcmp("\0", "\200"));
	printf("%i\n", strcmp("", ""));
	printf("%i\n", strcmp("abcdef", "abcdef"));
	printf("%i\n", strcmp("abcdefab", "abcdefaba"));
}
