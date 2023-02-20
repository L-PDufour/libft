/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:09:09 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 14:06:24 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;
//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "ABCDEF", 6);
//    ret = ft_memcmp(str1, str2, 5);
//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }
//    return(0);
// }