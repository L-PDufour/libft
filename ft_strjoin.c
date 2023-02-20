/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:41:25 by leon              #+#    #+#             */
/*   Updated: 2023/02/20 11:21:06 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

// int main()
// {
//     char *src = "123";
//     char *dst = "456";
//     char *cat;
//     cat = ft_strjoin(src, dst);
//     printf("%s", cat);
//     return (0);
// }