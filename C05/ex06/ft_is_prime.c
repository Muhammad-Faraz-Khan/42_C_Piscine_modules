//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	num;

	num = nb;
	i = 2;
	if (num == 1)
		return (0);
	if (num < 0)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int n = 11;
// 	int resultt = ft_is_prime(n);
// 	printf("%d", resultt);
// }