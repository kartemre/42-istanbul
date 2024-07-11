#include <stdio.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dlen;
	unsigned int slen;

	i = ft_strlen(dest);
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size < 1)
		return (slen + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);

}

int main()
{
	
}
