/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:19 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/17 09:02:41 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

// int main ()
// {
//    const char str[] = "This is just a String";
//    const char ch = 'u';
//    char *p;
//    p = ft_strchr(str, ch);
//    printf("String starting from %c is: %s\n", ch, p);
//    return (0);
// }
