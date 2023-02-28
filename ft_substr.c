/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:28:03 by leon              #+#    #+#             */
/*   Updated: 2023/02/28 10:18:51 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	dest = ft_calloc(sizeof(char), (len) + 1);
	if (!dest)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}

// #include <stdio.h>
// int main()open
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
