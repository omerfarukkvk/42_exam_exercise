int	ft_atoi(const char *str)
{
	int num = 0, i = 0, neg = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
	if (str[0] == '-')
		neg = -1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * neg);
}