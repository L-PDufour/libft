/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:36:54 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/14 09:56:48 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	destlen;

	len = 0;
	destlen = 0;
	while (src[len] != '\0')
	{
		if (size && (len < (size - 1)))
		{
			dest[len] = src[len];
			destlen++;
		}
		len++;
	}
	dest[destlen] = '\0';
	return (len);
}
