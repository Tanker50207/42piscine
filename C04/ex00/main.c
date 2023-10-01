#include <unistd.h>

int	ft_strlen(char *str);

int main(void)
{
	int res;

	res = ft_strlen("mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm");
	write(1, &res, 1);
	return (0);
}