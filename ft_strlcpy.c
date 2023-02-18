/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:36:54 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/17 14:07:11 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
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
