/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:41:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/26 20:13:58 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcpy.c"
#include "ft_strchr.c"
#include "ft_substr.c"
#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (((i == 0) && s[i] != c) || (s[i - 1] == c && s[i] != c))
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
		i++;
	len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	array = ft_calloc(sizeof(char **), (ft_countwords(s, c) + 1));
	if (!array)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		array[i] = ft_calloc(sizeof(char), (ft_wordlen(&s[j], c)));
		if (!array[i])
			array[i] = (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			array[i][k++] = s[j++];
	}
	return (array);
}

int	main(void)
{
	printf("====ft_split====\n");
	char **a = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	for (int i = 0; i < ft_countwords("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse",' '); i++)
		printf("%s\n", a[i]);
	return (0);
}