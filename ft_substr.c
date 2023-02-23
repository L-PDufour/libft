/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:28:03 by leon              #+#    #+#             */
/*   Updated: 2023/02/23 16:23:54 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include "ft_calloc.c"
#include "ft_strlcpy.c"

// static char *vide(void)
// {
// 	char *out;

// 	out = malloc(sizeof(char) * 1);
// 	out[0] = '\0';
// 	return (out);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t i;
	size_t slen;

	slen = len;
	dest = ft_calloc(sizeof(char), (len) + 1);
	if (!dest)
		return (NULL);
	i = 0;
 	if (!s)
		return (NULL);
	if (len > ft_strlen(s - start))
		len = ft_strlen(s - start);
	while (i < len && s[start])
    	{
        dest[i] = s[start];
        i++;
        start++;
    	}
	return (dest);

	
	// size_t  i;
    // char    *str;
    // size_t  s_len;
    // size_t  str_len;
    // i = 0;
    // s_len = ft_strlen(s);
    // if (s_len < start || len <= 0)
    //     return (ft_calloc(1, sizeof(char)));
    // if (len < s_len - start)
    //     str_len = len;
    // else
    //     str_len = s_len - start;
    // str = ft_calloc(str_len + 1, sizeof(char));
    // if (!str)
    //     return (NULL);
    // while (i < str_len && s[start])
    // {
    //     str[i] = s[start];
    //     i++;
    //     start++;
    // }
    // str[i] = '\0';
    // return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *test;
// 	test = ft_substr("lorem ipsum dolor sit amet", 7, 10);
// 	printf("%s", test);
// }