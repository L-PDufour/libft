/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:28:03 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 15:39:06 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			dest_len;
	char			*dest;
	unsigned int	i;

	dest_len = len - start;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "substr function Implementation";
	int m = 7;
	int n = 7; 
	char *dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return (0);
}