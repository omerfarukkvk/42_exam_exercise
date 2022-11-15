#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	char *str;

	if (ac == 4)
	{
		str = av[1];
		if (av[2][1] == '\0' && av[3][1] == '\0')
		{
			while (str[i])
			{
				if (str[i] == av[2][0])
					str[i] = av[3][0];
				write(1, &str[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}