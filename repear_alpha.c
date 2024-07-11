/*
Repeat_alpha adında bir dize alan ve onu görüntüleyen bir program yazın
Her alfabetik karakterin alfabetik dizini kadar tekrarlanması,
ardından yeni bir satır gelir.

'a', 'a' olur, 'b', 'bb' olur, 'e', 'eeeee' olur, vb...

Dava değişmeden kalır.

Argüman sayısı 1 değilse, sadece yeni satırı görüntüleyin.
*/

#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    char x;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if ( av[1][i] >= 'a' && av[1][i] <= 'z') 
            {
                x = 'a';
                while (x <= av[1][i])
                {
                    write(1, &av[1][i], 1);
                    x++;
                }   
            }            
            else if ( av[1][i] >= 'A' && av[1][i] <= 'Z') 
            {
                x = 'A';
                while (x <= av[i][i])
                {
                    write(1, &av[1][i], 1);
                    x++;
                }   
            }
            else 
                write(1, &av[1][i],1);
            i++;
        }
    }
    write(1, "\n",1);
}