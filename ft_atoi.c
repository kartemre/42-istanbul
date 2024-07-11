/*
str dizesi bağımsız değişkenini bir tamsayıya dönüştüren bir işlev yazın (int yazın)
ve onu geri verir.

Standart atoi(const char *str) işlevine çok benzer şekilde çalışır, bakın adam.

İşleviniz aşağıdaki gibi bildirilmelidir:
*/
int ft_atoi(const char *str)
{
    int sign;
    int res;
    int i;

    i = 0;
    while (str[i] ==  32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    sign = 1;
    if (str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        res = (res * 10 + (str[i] - '0'));
        i++;
    }
    return (res*sign);
}
/*
int ft_atoi(const char*s)
{
    int sign = 1;
    int r = 0;

    while (*s == 32 || *s >= 9 && *s <= 13)
        s++;
    if (*s == '-'  || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        r = r * 10 + *s - 48;
        s++;
    }
    return (sign * r);
}
#include <stdio.h>
int main(void)
{
    char arr[] = "   \n \t -4325";
    printf("%d",ft_atoi(arr));
}
*/

/*
int	ft_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (*str == 32 || (*str >= 9 && *str <= 13)) 
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -1;
        }
        str++;
    }
    
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return (sign * result);
}
*/
#include <stdio.h>
int main(void)
{
    char arr[] = "   \n \t -4325";
    printf("%d",ft_atoi(arr));
}