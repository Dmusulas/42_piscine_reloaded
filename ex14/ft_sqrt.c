int	ft_binary_search_sqrt(int nb, long int low, long int high)
{
	long int	mid;

	if (high >= low)
	{
		mid = (high + low) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			return (ft_binary_search_sqrt(nb, mid + 1, high));
		return (ft_binary_search_sqrt(nb, low, mid - 1));
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int					answer;
	long unsigned int	high;
	long unsigned int	low;

	answer = 0;
	high = nb / 2;
	low = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	answer = ft_binary_search_sqrt(nb, low, high);
	return (answer);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("The square root of %d is %d", atoi(argv[1]),
			ft_sqrt(atoi(argv[1])));
	}
	return (1);
}
*/
