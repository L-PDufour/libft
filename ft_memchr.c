/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:46:21 by leon              #+#    #+#             */
/*   Updated: 2023/02/23 08:59:31 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	if (!s)
		return (NULL);
	ch = (unsigned char) c;
	str = (unsigned char *) s;
	i = 0;
	while (n--)
	{
		if (*str != ch)
			str++;
		else
			return (str);
	}
	return (0);
}
