#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int	i;
	int	j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (count > i)
						printf("0");
					count = i;
					break;
				}
				j++;
			}
			i++;
		}
		if (count == strlen(av[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}