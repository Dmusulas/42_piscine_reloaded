int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strlen("TESTAS"));
	return 1;
}

