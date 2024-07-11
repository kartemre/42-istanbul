
int ft_atoi(char *str)
{
	int i;

	int sign;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <=13))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	
}
}
int main ()
{
	char arr[] = " \n\t -1453";
}
