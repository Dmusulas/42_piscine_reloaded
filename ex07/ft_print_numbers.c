#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	tmp;

	tmp = '0';
	while (tmp <= '9')
	{
		ft_putchar(tmp);
		tmp++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (1);
}
