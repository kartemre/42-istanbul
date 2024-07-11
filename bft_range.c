/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
#include <stdlib.h>
int     *ft_range(int min, int max)
{
	int range;
	int *d;
	int *dest;
	int i;

	if (max - min < 0)
		range = min - max + 1;
	else
		range = max - min + 1;
	d = ((dest = (int *)malloc(range * sizeof(int))));
	if(!d)
		return 0;
	if (max > min)
	{
		while (i < range)
		{
			d[i] = min + i; 
			i++;
		}
	}
	else if (min > max)
	{
		while (i < range)
		{
			d[i] = min; 
			i++;
			min--;
		}
	}
	return (dest);	
}
#include <stdio.h>
int main()
{
	int min = 9,max = -1,size, i = 0;
	int *x = ft_range(min,max);
	size  = min - max;
	if (size < 0)
		size *= -1;
	while (i <= size)
	{
		printf("%d", x[i]);
		i++;
	}
	
}