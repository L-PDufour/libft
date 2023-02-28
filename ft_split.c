/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldufour <ldufour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:41:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/28 15:13:57 by ldufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_free(char **array, int i)
{
	while (i--)
	{
		free(array[i]);
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	array = ft_calloc(sizeof(char *), (ft_countwords(s, c)));
	if (!array)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		array[i] = ft_calloc(sizeof(char), (ft_wordlen(&s[j], c)));
		if (!array[i])
			ft_free(array, i);
		while (s[j] != c && s[j])
			array[i][k++] = s[j++];
	}
	return (array);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main()
// {
// 	char	**tabstr;
// 	int		i;

// 	i = 0;
// 			if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// }
// }