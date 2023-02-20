/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:49:00 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 14:14:39 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	ptr = NULL;
	len = 0;
	while (s[len])
	{
		len++;
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
//     char source[] = "		";
//     char* target = ft_strdup(source);

//     printf("%s", target);
//     return (0);
// }
