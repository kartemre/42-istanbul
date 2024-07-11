#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_cmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void ft_swap(char **s1, char **s2)
{
	char *tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_cmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	c = 0;
	while (j < argc)
	{
		while (argv[j][c])
		{
			ft_putchar(argv[j][c]);
			c++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
