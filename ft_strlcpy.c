/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:36:54 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/20 14:28:18 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dstlen;

	len = 0;
	dstlen = 0;
	while (src[len] != '\0')
	{
		if (dstsize == (len < (dstsize - 1)))
		{
			dst[len] = src[len];
			dstlen++;
		}
		len++;
	}
	dst[dstlen] = '\0';
	return (len);
}
