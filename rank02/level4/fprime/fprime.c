#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int num = 0, i = 2;
    char *n= av[1];

    if (ac == 2)
    {
        num = atoi(n);
        if (num > 0)
        {
            if (num == 1)
                printf("1");
            while (num != 1)
            {
                if (num % i == 0)
                {
                    printf("%d",i);
                    num /= i;
                    if(i < num)
                        printf("*");
                }
                else
                    i++;
            }
        }
    }
    printf("\n");
}
