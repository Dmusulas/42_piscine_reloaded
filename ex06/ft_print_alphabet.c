#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	tmp;

	tmp = 'a';
	while (tmp <= 'z')
	{
		ft_putchar(tmp);
		tmp++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (1);
}
