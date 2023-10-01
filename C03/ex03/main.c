#include <unistd.h>
#include <strings.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str1[] = "Bon";
	char str2[] = "jour";
	char ctrl1[] = "Bon";
	char ctrl2[] = "jour";
	char *str1p;
	char *str2p;
	char *ctrl1p;
	char *ctrl2p;

	str1p = str1;
	str2p = str2;
	ctrl1p = ctrl1;
	ctrl2p = ctrl2;
	ft_strncat(str1p, str2p, 2);
	write(1, str1p, 8);
	ft_strncat(str1p, "", 2);
	write(1, str1p, 8);
	strncat(ctrl1p, ctrl2p, 2);
	write(1, ctrl1p, 8);
	strncat(ctrl1p, "", 2);
	write(1, ctrl1p, 8);
	return(0);
}