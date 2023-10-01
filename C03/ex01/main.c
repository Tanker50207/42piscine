#include <stdio.h>
#include <strings.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	printf("%i\n", ft_strncmp("aa\200", "aa\0", 9));
	printf("%i\n", ft_strncmp("\0abc", "\200abc", 3));
	printf("%i\n", ft_strncmp("", "", 1));
	printf("%i\n\n", ft_strncmp("abcdefab", "abcdefaba", 8));

	printf("%i\n", strncmp("aa\200", "aa\0", 9));
	printf("%i\n", strncmp("\0abc", "\200abc", 3));
	printf("%i\n", strncmp("", "", 1));
	printf("%i\n", strncmp("abcdefab", "abcdefaba", 8));
}
