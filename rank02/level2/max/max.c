int	max(int *tab, unsigned int len)
{
	int i = 0, max = 0;

	if (len == 0)
		return 0;
	while (len > 0)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
		len--;
	}
	return max;
}