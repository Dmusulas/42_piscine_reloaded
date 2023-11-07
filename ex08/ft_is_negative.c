#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
//TODO Comment out
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_is_negative(atoi(argv[1]));
	}
	return (1);
}
