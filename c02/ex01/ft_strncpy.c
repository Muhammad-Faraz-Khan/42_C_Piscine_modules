#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int len = 6;
// 	char empty[100] = {};
// 	char string[] = "Wolfsburg";
// 	ft_strncpy(empty, string, len);
// 	printf("%s\n", empty);
// 	return (0);
// }