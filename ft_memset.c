/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:57:15 by ldufour           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/20 10:22:01 by ldufour          ###   ########.fr       */
=======
/*   Updated: 2023/02/17 14:06:56 by leon             ###   ########.fr       */
>>>>>>> 950ecc0e2777df3b01430bae64459a7d701637f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = b;
	while (i > len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	a[i] = '\0';
	return (b);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str[50];
// 	strcpy(str, "test");
// 	puts(str);
// 	ft_memset(str, 'a', 7);
// 	puts(str);
// 	return(0);
// }