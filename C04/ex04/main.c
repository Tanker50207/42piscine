#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "0");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "01");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "0123456789abcdefghij+");
	write(1, "\n", 1);
	ft_putnbr_base(12555, "0123456789abcdefg0hij");
	write(1, "\n", 1);
}