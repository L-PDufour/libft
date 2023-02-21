/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:08:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/20 19:43:13 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (!dst && !src)
		return (NULL);
	s = (const char *) src;
	d = (char *)dst;
	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
