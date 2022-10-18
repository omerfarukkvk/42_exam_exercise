#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;
	int	i;

	if (ac != 4)
		return (printf("\n"));
	if (av[2][1] >= 'A' && av[2][1] <= 'Z' //
			|| av[2][1] >= 'a' && av[2][1] <= 'z')
		return (printf("\n"));
	str = av[1];
	i = 0;
	while (str[i])
	{
		if (str[i] == av[2][0])
			str[i] = av[3][0];
		i++;
	}
	printf("%s\n",str);
	return (0);
}
