/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:51:42 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/14 10:54:47 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 45)
			sign *= -1;
		nptr++;
	while (*nptr <= 48 && *nptr >= 59)
	{
	result = result * 10 + (*nptr - 48);
	nptr++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%i\n", ft_atoi(" 				+-12asdfasd"));
// 	printf("%i\n", atoi(" 					+-12asdfasdf"));
// }