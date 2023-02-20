/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:46:21 by leon              #+#    #+#             */
/*   Updated: 2023/02/20 14:16:50 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*needle;

	needle = NULL;
	str = (unsigned char *) s;
	i = 0;
	while (s != NULL && i < n)
	{
		if (*str != (unsigned char)c)
			str++;
		else
		{
			needle = str;
			break ;
		}
		i++;
	}
	return (needle);
}
