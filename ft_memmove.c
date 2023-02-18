/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:08:05 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/17 14:07:31 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int	main(void)
// {
// 	char dest[] = "oldstring";
// 	const char src[] = "newstring";
// 	printf("Before memmove dest = %s, src = %s\n", dest, src);
// 	ft_memmove(dest, src, 9);
// 	printf("After memmove dest = %s, src = %s\n", dest, src);
// 	return (0);
// }