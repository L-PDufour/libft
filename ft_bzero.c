/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:42:51 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/23 13:11:33 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	if (!s)
		return ;
	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
