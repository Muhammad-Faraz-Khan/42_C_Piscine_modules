#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ln;

	ln = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
// 	char aa[20] = "hello";
// 	char bay[20] = "129278kjJ9";
// 	char cay[0] = "";
// 	printf("A: %d\nB: %d\nC: %d\n", ft_str_is_lowercase(aa),
// 		ft_str_is_lowercase(bay), ft_str_is_lowercase(cay));
// }