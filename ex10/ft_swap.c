void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
/*
#include <stdio.h>

int	main()
{
	int nbr = 2;
	int nbr2 = 4;

	printf("Before swap: %d %d\n", nbr, nbr2);
	ft_swap(&nbr, &nbr2);
	printf("After swap: %d %d\n", nbr, nbr2);
	return (1);
}
*/
