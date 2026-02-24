/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhan <mukhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:43:48 by mukhan            #+#    #+#             */
/*   Updated: 2026/02/19 13:11:15 by mukhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[0];
	while (src[j] != '\0')
	{
		dest[i + 1] = src[j + 1];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "asdasd";
// 	char *result;

// 	result = ft_strcat(str1, str2);
// 	printf("%s\n", result);
// 	return (0);
// }