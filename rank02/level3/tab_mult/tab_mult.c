#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int ft_atoi(char *nbr)
{
	int i = 0,num = 0;

	while (nbr[i])
	{
		num = num * 10 + nbr[i] - 48;
		i++;
	}
	return (num);
}

void	printnum(int nbr)
{
	if (nbr <= 9)
		ft_putchar(nbr + 48);
	else if (nbr > 9)
	{
		printnum(nbr / 10);
		printnum(nbr % 10);
	}
}

int main(int ac, char **av)
{
	int num,i = 1;
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		if (num < 0)
			num = 0;
		while (i <= 9)
		{
			ft_putchar(i + 48);
			write(1, " x ", 3);
			printnum(num);
			write(1, " = ", 3);
			printnum(num * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}