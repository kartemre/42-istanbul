#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	if (n == 0)
		return (0);

	while ((s1[i] != '\0' || s2[i] != '\0') && n - 1 > i)
	{
		if(s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}
