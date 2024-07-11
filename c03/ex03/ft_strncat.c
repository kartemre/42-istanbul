#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int x;
	
	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && nb > x)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);

}
