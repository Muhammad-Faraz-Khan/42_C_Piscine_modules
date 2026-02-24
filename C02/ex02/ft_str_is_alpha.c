#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ln;

	ln = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			ln++;
		}
		i++;
	}
	if (ln == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	char	A[20] = "Hello";
// 	char	B[20] = "Hel/2'o";
// 	char	C[20] = {};

// 	printf("A: %d\nB: %d\nC: %d\n", ft_str_is_alpha(A), ft_str_is_alpha(B),
// 		ft_str_is_alpha(C));
// }
