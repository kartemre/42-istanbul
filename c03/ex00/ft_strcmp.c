#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int 	i;
	i = 0;
	while (s1[i] = '\0' || s2[i] = '\0')
	{
		if (s1[i] == s2[i]
			i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
	char arr1[] = "emire";
	char arr2[] = "emreem";
	printf("%d", ft_strcmp(arr1, arr2));
}
