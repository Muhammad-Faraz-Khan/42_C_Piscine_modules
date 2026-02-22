#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}

// int	main(void)
// {
// 	int n1;
// 	int n2;

// 	n1 = 32;
// 	n2 = 2;

// 	ft_ultimate_div_mod(&n1, &n2);
// 	printf("a %d, b %d", n1, n2);
// }