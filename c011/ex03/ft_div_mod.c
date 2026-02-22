#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	n1;
// 	int	n2;
// 	int	div;
// 	int	mod;

// 	n1 = 6;
// 	n2 = 2;
// 	ft_div_mod(n1, n2, &div, &mod);
// 	printf("div %d , mod %d", div, mod);
// }
