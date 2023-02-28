/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:33:19 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/28 13:55:47 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
