/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:35:51 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/22 20:33:10 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int len;
	len = 0;

	if (n <= 0)
		len++;
	int x;
	x = n;
	while (x != 0)
	{
		x /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	x = n;
	while (x != 0)
	{
		str[--len] = (x % 10) + 48;
		x /= 10;
	}
	return (str);
}