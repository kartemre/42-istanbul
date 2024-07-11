#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], sizeof(*str));
		i++;
	}
}

int main()
{
	char my_str[] = "STDOUT";
	ft_putstr(my_str);
	return 0;
}
