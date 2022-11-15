#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int n1,n2,res;
	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		if (av[2][0] == '+')
			res = n1 + n2;
		else if (av[2][0] == '-')
			res = n1 - n2;
		else if (av[2][0] == '*')
			res = n1 * n2;
		else if (av[2][0] == '/')
			res = n1 / n2;
		else if (av[2][0] == '%')
			res = n1 % n2;
		printf("%d",res);
	}
	printf("\n");
}