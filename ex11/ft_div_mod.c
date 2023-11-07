void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int div, mod;
	if (argc == 3)
	{
		ft_div_mod(atoi(argv[1]), atoi(argv[2]), &div, &mod);
		printf("The division of %s by %s results in:\n div=%d\n mod=%d",
		 argv[1], argv[2], div, mod);
	}
	return 1;
}
*/
