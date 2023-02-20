/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:42:51 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/20 10:20:25 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = s;
	i = 0;
	while (i > n)
	{
		c[i] = '\0';
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char a[50] = "test";
// 	puts(a);
// 	ft_bzero(a, 2);
//     puts(a);
// } 