#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0,j = 0;

	while (s[i])
	{
		if (s[i] == accept[j])
			j++;
		else
			break;
		i++;
	}
	return (j);
}