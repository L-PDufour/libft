/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:46:21 by leon              #+#    #+#             */
/*   Updated: 2023/02/28 10:00:29 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	if (!s)
		return (NULL);
	ch = (unsigned char) c;
	str = (unsigned char *) s;
	while (n--)
	{
		if (*str != ch)
			str++;
		else
			return (str);
	}
	return (0);
}
