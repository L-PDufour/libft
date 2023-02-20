/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:08:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/20 14:38:46 by ldufour          ###   ########.fr       */
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
	while (i < len)
	{
		*(d + i) = *(s + i);
		++i;
	}
	return (dst);
}
