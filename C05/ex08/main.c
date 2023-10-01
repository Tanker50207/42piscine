int ft_ten_queens_puzzle(void);

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbr;
	int		current_figure;
	int		current_position;

	nbr = (long) nb;
	current_position = 1000000000;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr / current_position == 0 && current_position != 1)
		current_position /= 10;
	current_figure = nbr / current_position;
	while (current_position > 1)
	{
		nbr -= current_figure * current_position;
		current_figure += 48;
		write(1, &current_figure, 1);
		current_position /= 10;
		current_figure = nbr / current_position;
	}
	current_figure += 48;
	write(1, &current_figure, 1);
}


int main(void)
{
	ft_putnbr(ft_ten_queens_puzzle());
	return (0);
}