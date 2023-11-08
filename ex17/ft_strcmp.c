int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (0);
		s1++;
		s2++;
	}
	return (*s2 - *s1);
}

int main(int argc, char *argv[])
{
	
	return (1);
}
