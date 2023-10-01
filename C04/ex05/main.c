#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%i\n", ft_atoi_base("      \n\n       -+---ffffgabcd12", "0123456789abcdef"));
	printf("%i\n", ft_atoi_base("       \n\n      --+-1234agbcd12", "0123456789abcdef"));
	printf("%i\n", ft_atoi_base(" ---++-+---+-++-+-+++------0000001ag12345", "0123456789abcdef"));
	printf("%i\n", ft_atoi_base("0ag12345", "0123456789"));
	printf("%i\n", ft_atoi_base("--+-+-++------+++ga0ga12345", "0123456789"));
	printf("%i\n", ft_atoi_base("jjj", "0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("1000", "0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("", "0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("jjj", "0123456789abcdefghij+"));
	printf("%i\n", ft_atoi_base("abcdefg", "0123456789abcdefg0hij"));
	printf("%i\n", ft_atoi_base("jjj", "0123456789abcdefghij "));
	printf("%i\n", ft_atoi_base("jjj", " 0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("jjj", "+0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("jjj", "-0123456789abcdefghij"));
	printf("%i\n", ft_atoi_base("jjj", "0123456789abcdefghij-"));
	printf("%i\n", ft_atoi_base("-jjj", ""));
	printf("%i\n", ft_atoi_base("-jjj", "a"));
}
