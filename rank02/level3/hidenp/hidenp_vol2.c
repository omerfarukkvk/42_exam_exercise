#include "stdio.h"

int ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	return i;
}

int main(int a, char **b)
{
	int i = 0;
	int j = 0;
	
	if (a == 3)
	{
		int h = ft_strlen(b[1]);
		int k = ft_strlen(b[2]);

		while (b[1][j] && i != k)
		{
			if (b[1][j] == b[2][i])
				j++;
			i++;
		}

		if(h == j)
			printf("1");
		else
			printf("0");
	}
}