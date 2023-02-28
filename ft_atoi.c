/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:32:07 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/28 10:11:56 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (!str || ft_strlen(str) == 0)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43)
		str++;
	else if (*str == 45)
	{
		sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
	result = (result * 10) + (*str - 48);
	str++;
	}
	return (result * sign);
}
