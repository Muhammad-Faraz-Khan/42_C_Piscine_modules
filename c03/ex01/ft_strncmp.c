/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhan <mukhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:09:38 by mukhan            #+#    #+#             */
/*   Updated: 2026/02/22 11:10:15 by mukhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		len;
// 	int		result;

// 	len = 0;
// 	str1 = "3Helloy";
// 	str2 = "Hellow";
// 	result = ft_strncmp(str1, str2, len);
// 	printf("%d\n", result);
// 	return (0);
// }
