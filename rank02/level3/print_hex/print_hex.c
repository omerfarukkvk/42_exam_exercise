#include <unistd.h>
#include <stdio.h>

int atoi(char *n)
{
	int i = 0;

	while (*n)
		i = (i * 10) + (*n++ - '0');
	return (i);
}

void ft_hex(int num)
{
	char *hex = "0123456789abcdef";

	if (num < 16)
		write (1, &hex[num], 1);
	else if (num > 16)
	{
		ft_hex(num / 16);
		ft_hex(num % 16);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_hex(atoi(av[1]));
	}
	write(1, "\n", 1);
}