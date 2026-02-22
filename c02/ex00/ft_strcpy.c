#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// char empty[] = {};
// char string[] = "Wolfsburg";
// ft_strcpy(empty,string);
// printf("%s\n", empty);
// return (0);
// }