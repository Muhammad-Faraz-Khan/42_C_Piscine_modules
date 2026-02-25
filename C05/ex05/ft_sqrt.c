/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhan <mukhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:14:55 by mukhan            #+#    #+#             */
/*   Updated: 2026/02/25 13:37:18 by mukhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 2)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	return (sqrt);
}

// int main()
// {
// 	int n =9;
// 	int resultt = ft_sqrt(n);
// 	printf("%d", resultt);
// }