// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	j;
	int	i;

	j = nb;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (i < j)
		{
			nb = nb * i;
			i++;
		}
		return (nb);
	}
}
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(6));
// }