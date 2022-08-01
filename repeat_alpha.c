#include <stdio.h>

int	ft_remainder(char c)
{
	int a;

	if (c >= 'A' && c <= 'Z')
		return (a = (c - 'A') + 1);
	else if (c >= 'a' && c <= 'z')
		return (a = (c - 'a') + 1);
	else
		return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	num;
	char	*msg;

	if (ac < 2)
		return (printf("\n"));
	i = 0;
	if (av[1][i] == '\0')
		return (printf("\n"));
	msg = av[1];
	num = 0;
	while (msg[i])
	{
		num += ft_remainder(msg[i]);
		while (num != 0)
		{
			printf("%c",msg[i]);
			num--;
		}
		i++;
	}
	printf("\n");
	return (0);
}
