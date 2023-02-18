/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:41:25 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 15:57:01 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	ptr = NULL;
	len = 0;
	while (s[len])
	{
		len++;
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(sizeof(ft_strlen(s1) + ft_strlen(s2)));
	if (str)
	{
		str = ft_strdup(s1);
		str = ft_strcat(str, s2);
	}
	return (str);
}

// int main()
// {
//     char *src = "123";
//     char *dst = "456";
//     char *cat;
//     cat = ft_strjoin(src, dst);
//     printf("%s", cat);
//     return (0);
// }