/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:35:50 by ldufour           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/20 10:32:08 by ldufour          ###   ########.fr       */
=======
/*   Updated: 2023/02/17 14:05:28 by leon             ###   ########.fr       */
>>>>>>> 950ecc0e2777df3b01430bae64459a7d701637f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

<<<<<<< HEAD
=======
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

>>>>>>> 950ecc0e2777df3b01430bae64459a7d701637f7
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len);
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = "12345";
//     char s2[] = "6789";
//     ft_strlcat(s2, s1, 1);
//     printf("%s\n", s2);
// }
