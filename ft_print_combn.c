#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_output(int *range, int n)
{
	int i;
	int display;

	display = 1;
	i = 0;
	while (i < (n-1))
	{
		if (range[i] >= range[i+1])
			display = 0;
		i++;
	}
	if (display == 0)
		return ;
	i = -1;
	while (i++ < n)
		ft_putchar(range[i] + 48);

	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_combn(int n)
{
	if (10<=n || n <= 0)
	{
		write(1, "error must be 0 < n < 10", 24);
		return ;
	}
	else
	{
		int i;
		int range[10];

		i = -1;
		while (i++ < n)
			range[i] = i;
		while (range[i] <= (10 - n)) //2 bas ise max 8, 3 se 7 olur ilkdeger
		{
			ft_output(range, n);
			range [n - 1]++;   //ft_outputun içinde displayi 0 yapar 2 kez dönünce
			i = n;
			while(i > 1)
			{
				i--;
				if (range[i] > 9)
				{
					range[i - 1]++;
					range[i] = 0;
				}
			}
		}
	}
}
int main()
{
	ft_print_combn(2);
	return 0;
}
