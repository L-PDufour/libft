/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:28:03 by leon              #+#    #+#             */
/*   Updated: 2023/02/25 20:36:32 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_calloc.c"
#include "ft_strlcpy.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	dest = ft_calloc(sizeof(char), (len));
	if (!dest)
		return (NULL);
    if (!s)
		return (NULL);
    if (ft_strlen(s) < start)
		len = 0;
    if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
    ft_strlcpy(dest, s + start, len + 1 );
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char *test;
// 	test = ft_substr("lorem ipsum dolor sit amet", 0, 10);
// 	printf("%s\n", test);
//     test = ft_substr("lorem ipsum dolor sit amet", 7, 10);
// 	printf("%s\n", test);
//     test = ft_substr("lorem ipsum dolor sit amet", 7, 0);
// 	printf("%s\n", test);
//     test = ft_substr("lorem ipsum dolor sit amet", 0, 0);
// 	printf("%s\n", test);
//     test = ft_substr("lorem ipsum dolor sit amet", 400, 20);
// 	printf("%s\n", test);
// }
