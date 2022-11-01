#include <unistd.h>

int ft_repeat(char *str, char c, int i)
{
	int a = 0;
	while(a < i)
	{
		if(str[a] == c)
			return (0);
		a++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j;
	
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if(av[1][i] == av[2][j] && ft_repeat(av[1], av[2][j], i))
				{
					write(1, &av[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}