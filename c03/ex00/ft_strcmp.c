/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhan <mukhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:15:23 by mukhan            #+#    #+#             */
/*   Updated: 2026/02/19 15:41:26 by mukhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		result;

// 	str1 = "Hello";
// 	str2 = "Hello";
// 	result = ft_strcmp(str1, str2);
// 	printf("%d\n", result);

// 	return (0);
// }
