#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0,n = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				n = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				n = av[1][i] - 64;
			else
				n = 1;
			while (n != 0)
			{
				write(1, &av[1][i], 1);
				n--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}