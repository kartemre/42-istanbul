#include <unistd.h>

void	ft_putchar(char c);


void	yazdirma(int x, char bas, char ort, char son)
{
	int sutun;

	sutun = 1;
	
	while (sutun <= x)
	{
		if (sutun == 1)
			ft_putchar(bas);
		else if(sutun == x)
			ft_putchar(son);
		else
			ft_putchar(ort);
		sutun++;
	}
	ft_putchar('\n');
}


void	rush(int x, int y)
{
	int satir;
	
	satir = 1;
	if (x < 1 || y < 1)
		write(1, "hata verir\n", 11);
	else
	{
		while(satir <= y)
		{
			if (satir == 1)
				yazdirma(x, '/', '*', '\\');
			
			else if (satir == y)
				yazdirma(x, '\\', '*', '/');

			else 
				yazdirma(x, '*', ' ', '*');

			satir++;
		}
	}
}

