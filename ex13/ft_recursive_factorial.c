int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb >= 1)
		return (nb *= ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("The factorial of %d is %d", atoi(argv[1]),
			ft_recursive_factorial(atoi(argv[1])));
		return (1);
	}
	return (0);
}
*/
