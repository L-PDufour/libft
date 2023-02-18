/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:03:59 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 09:45:27 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			temp = (char *)s;
		}
		s++;
	}
	return (temp);
}

// int main ()
// {
//    const char str[] = "Ceci est un ceci testitos";
//    const char ch = 'i';
//    char *p;
//    p = ft_strrchr(str, ch);
//    printf("String starting from %c is: %s\n", ch, p);
//    return (0);
// }
