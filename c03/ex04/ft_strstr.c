#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;
	int	x;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		x = 0;
		if (str[i] == to_find[x])
		{
			tmp = 0;
			while (to_find[x] != '\0')
			{
				if (str[i + x] != to_find[x])
					tmp = 1;
				x++;
			}
			if (tmp == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}

int main ()
{
	char ar[] = "Emrenin pili bitiyore";
	char f[] = "reni";
	printf("%s",ft_strstr(ar, f));
}
