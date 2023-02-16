/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:57:15 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/16 14:14:37 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = b;
	while (a[i] > len)
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