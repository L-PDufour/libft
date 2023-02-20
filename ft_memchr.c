/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:46:21 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 10:08:45 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0' || i < n)
	{
		if (*str == c)
		{
			return (str);
		}
		i++;
	}
	return (str);
}

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '	';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }
