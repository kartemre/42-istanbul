#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	
}

int	main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 20;
	b = 3;
	ft_div_mod(a, b, &x, &y);
	printf("%d %d\n", a, b);
	printf("%d %d\n", x, y);
	return 0;
}
