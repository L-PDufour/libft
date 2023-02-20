/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:42:34 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/20 13:26:53 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(sizeof(ft_strlen(s1) + ft_strlen(s2)));
	if (str)
	{
		str = ft_strdup(s1);
		str = ft_strcat(str, s2);
	}
	return (str);
}
