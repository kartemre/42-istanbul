#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	i = 0;
	int x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
