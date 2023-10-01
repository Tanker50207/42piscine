#include <unistd.h>
#include <strings.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char test[8];
	char ctrl[8];
	//char *ctrl = str;

	ft_strcpy(test, "Bonjour");
	write(1, test, 9);
	write(1, "\n", 1);
	strcpy(ctrl, "Maljour");
	write(1, ctrl, 9);
	write(1, "\n", 1);
	ft_strcpy(test, "");
	write(1, test, 9);
	write(1, "\n", 1);
	strcpy(ctrl, "");
	write(1, ctrl, 9);
	return (0);
}
