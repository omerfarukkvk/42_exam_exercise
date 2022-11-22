#include <stdio.h>
#include <stdlib.h>
int *ft_rrange(int start, int end)
{
	int i = 0;
	int *res;

	i = start - end;
	if (i < 0)
		i *= -1;
	res = (int *)malloc(sizeof(int) * i);
	i = 0;
	//printf("%d %d-----",start,end);
	while(end != (start - 1))
	{
		res[i] = end;
		i++;
		end--;
	}
	return (res);
}
/*int main()
{	int *a = ft_rrange(1,4), i = 0;
	while (i <= 3)
		printf("%d",a[i++]);
}*/