#include <unistd.h>
#include <strings.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char ctrl[7];
	//char *ctrl = str;

	ft_strcpy(ctrl, "Bonjour");
	write(1, ctrl, 9);
	write(1, "\n", 1);
	strcpy(ctrl, "Maljour");
	write(1, ctrl, 9);
	write(1, "\n", 1);
	ft_strcpy(ctrl, "");
	write(1, ctrl, 9);
	return (0);
}
