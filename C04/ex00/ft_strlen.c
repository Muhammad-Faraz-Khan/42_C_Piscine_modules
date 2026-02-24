//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char min[]="Hello";
// 	int result;
// 	result = ft_strlen(min);
// 	printf("%d", result);
// }