#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0, j = 1;
	
	if (ac > 1)
	{
		while (j < ac)
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][0] >= 'a' && av[j][0] <= 'z')
						av[j][0] -= 32;
				else if (av[j][i] == ' ' || av[j][i] == '\t' && av[j][i + 1] != '\0')
				{
					write(1, &av[j][i], 1);
					if (av[j][i + 1] >= 'a' && av[j][i + 1] <= 'z')
						av[j][i + 1] -= 32;
					else if (av[j][i + 1] == ' ' || av[j][i + 1] == '\t')
						i--;
					i++;
				}
				else if (av[j][i] >= 'A' && av[j][i] <= 'Z' && i != 0)
					av[j][i] += 32;
				if (av[j][i] != ' ' && av[j][i] != '\t')
					write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
