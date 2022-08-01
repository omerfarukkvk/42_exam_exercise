#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (printf("\n"));
	i = 0;
	while (av[ac - 1][i])
		printf("%c",av[ac - 1][i++]);
	printf("\n");
	return (0);
}
