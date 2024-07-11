/*
Bir dize alan ve onu her bir dizenin yerine koyarak görüntüleyen bir program yazın.
harfler alfabetik sıraya göre 13 boşluk ileridedir.

'z', 'm' olur ve 'Z', 'M' olur. Vaka etkilenmeden kalır.

Çıktıyı yeni bir satır izleyecektir.

Argüman sayısı 1 değilse program yeni satırı görüntüler.
*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
                av[1][i] += 13;
            else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
                av[1][i] -= 13;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n",1);
}