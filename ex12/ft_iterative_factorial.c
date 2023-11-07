int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("The factorial of %d is %d", atoi(argv[1]),
			ft_iterative_factorial(atoi(argv[1])));
		return (1);
	}
	return (0);
}
*/
