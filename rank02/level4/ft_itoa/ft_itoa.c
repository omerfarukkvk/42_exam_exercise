#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int i = 0,cpy = nbr;
    char *num;

    if (nbr < 0)
        i++;
    while (cpy)
    {
        cpy /= 10;
        i++;
    }
    num = malloc(sizeof(char) * (i + 1));
    num[i] = '\0';
    i--;
    cpy = 0;
	if (nbr == 0)
	 	num[0] = '0';
    if (nbr < 0)
    {
        num[0] = '-';
        nbr *= -1;
    }
    while (nbr)
    {
        num[i] = nbr % 10 + 48;
        nbr /= 10;
        i--;
    }
	return (num);
}
