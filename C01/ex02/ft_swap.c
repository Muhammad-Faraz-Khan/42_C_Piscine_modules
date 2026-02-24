#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int n1;
// 	int n2;

// 	n1 = 45;
// 	n2 = 22;
// 	ft_swap(&n1, &n2);
// 	printf("num1 %d , num2 %d\n", n1, n2);
// }