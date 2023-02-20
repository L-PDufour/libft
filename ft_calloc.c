/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:12:22 by leon              #+#    #+#             */
/*   Updated: 2023/02/17 14:05:59 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (ptr);
	while (i < nmemb * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
//     int main()
// 	{
//         int i, * ptr, sum = 0;
//         ptr = ft_calloc(10, sizeof(int));
//         if (ptr == NULL) {
//             printf("Error! memory not allocated.");
//             exit(0);
//         }
//         printf("Calculating the sequence sum of the first 10 terms \n ");
//         for (i = 0; i < 10; ++i) { * (ptr + i) = i;
//             sum += * (ptr + i);
//         }
//         printf("Sum = %d", sum);
//         free(ptr);
//         return (0);
//     }