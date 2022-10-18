#include <unistd.h>

int main(void)
{
	char c = 'a';
	int k = 1;

	for (int i = 0; i <= 26; i++)
	{
		if (k == 1)
		{
			write(1, &c, 1);
			c++;
			k++;
		}
		else if (k == 2) 
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
			c++;
			k = 1;
		}

	}
}
