#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int k = 0;
	char *sonuc;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				sonuc[k] = av[1][i] - 25;

				write(1, &sonuc[k], 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				write (1, &av[1][(i - 25) * -1], 1);
			}
			i++;
			k++;
		}
	}
	write(1, "\n", 1);
}
