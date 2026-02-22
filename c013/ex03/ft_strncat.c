/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhan <mukhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:41:45 by mukhan            #+#    #+#             */
/*   Updated: 2026/02/19 13:11:10 by mukhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[0];
	while (src[j] != '\0' && j < nb)
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
// 	char str2[] = "asdasdertert";
// 	char *result;
// 	int x = 6;

// 	result = ft_strncat(str1, str2, x);
// 	printf("%s\n", result);
// 	return (0);
// }