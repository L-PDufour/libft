/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:35:50 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/15 14:31:22 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size )
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len);
}

#include <stdio.h>
int main()
{
    char s1[] = "12345";
    char s2[] = "6789";
    ft_strlcat(s2, s1, 1);
    printf("%s\n", s2);
}
