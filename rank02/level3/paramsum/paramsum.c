#include <unistd.h>

void putchar(int c)
{
	c += 48;
	write(1, &c, 1);
}

void printnum(int n)
{
	if (n <= 9)
		putchar(n);
	else if (n > 9)
	{
		printnum(n / 10);
		printnum(n % 10);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		printnum(ac - 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}