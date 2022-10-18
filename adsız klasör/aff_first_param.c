#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	*param;

	if (ac < 2)
	{
		printf("\n");
		return (0);
	}
	param = av[1];
	i = 0;
	while (param[i])
		printf("%c",param[i++]);
	printf("\n");
}
