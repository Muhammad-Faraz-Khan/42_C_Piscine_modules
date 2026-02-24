#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ln;

	ln = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
// 	char aa[20] = "Hello";
// 	char bay[20] = "129278kjJ9";
// 	char cay[0] = "";
// 	printf("A: %d\nB: %d\nC: %d\n", ft_str_is_printable(aa),
// 		ft_str_is_printable(bay), ft_str_is_printable(cay));
// }