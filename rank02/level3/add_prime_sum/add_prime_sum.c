#include <unistd.h>
#include <stdio.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_printnum(int n)
{
	if (n <= 9)
		ft_putchar(n + 48);
	else if (n > 9)
	{
		ft_printnum(n / 10);
		ft_printnum(n % 10);
	}
}

int	ft_atoi(char *str)
{
	int num = 0,i = 0,neg = 1;

	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		num = num * 10 + str[i]-48;
		i++;
	}
	return (num * neg);
}

int	ft_prime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_prime_sum(int num)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= num)
	{
		if (ft_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int main(int ac, char **av)
{
	int	res = 0, i = 2;
	int	num;

	if (ac == 2 && !(ft_atoi(av[1]) < 0))
	{
		num = ft_atoi(av[1]);
		ft_printnum(ft_prime_sum(num));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}