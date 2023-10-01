#include <unistd.h>
#include <strings.h>

char	*ft_strcat(char *dest, char *src);

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
	ft_strcat(str1p, str2p);
	write(1, str1p, 9);
	ft_strcat(str1p, "");
	write(1, str1p, 9);
	strcat(ctrl1p, ctrl2p);
	write(1, ctrl1p, 9);
	strcat(ctrl1p, "");
	write(1, ctrl1p, 9);
	return(0);
}