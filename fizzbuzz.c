/*
1'den 100'e kadar sayıları birbirinden birer nokta işaretiyle ayırarak yazdıran bir program yazınız.
Yeni hat.

Sayı 3'ün katıysa bunun yerine 'fizz' yazar.

Sayı 5'in katıysa bunun yerine 'buzz' yazdırır.

Sayı hem 3'ün katı hem de 5'in katıysa bunun yerine 'fizzbuzz' yazdırır.
*/

#include <unistd.h>
void wnbr(int number)
{
    char ar[10] = "0123456789";
    if (number > 9)
    {
        wnbr(number / 10);
        wnbr(number % 10);
    }
    else
        write(1, &ar[number],1);

}

int main(void)
{
    int i = 1;
    while (i<= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz",9);
        else if (i % 3 == 0)
            write(1, "fizz",5);
        else if (i % 5 == 0)
            write(1, "buzz",5);
        else
            wnbr(i);
        write(1, "\n",1);
        i++;
    }
}