/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:41:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/24 11:24:39 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int ft_countWords(char const *s, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;
    while (s[i]) 
    {
    // if (((i == 0) && s[i] != c) || (s[i - 1] == c && s[i] != c))  
    if (s[i] != c)
        words++;
    i++;
    }

return (words);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (ptr == 0)
		return (ptr);
	while (i < nmemb * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

char **ft_split(char const *s, char c)
{
    char **strArray = NULL; // array of strings to be returned 
    size_t i  = 0; // initializing index
    size_t j  = 0; // sub-index
    size_t len = 0; // length of a single string in the array

    if (!s)
        return NULL;
    
    // Allocate memory for the array
    strArray = ft_calloc(sizeof(char *), ft_countWords(s, c));

    while (*s) // Iterate through each character of the string
    {
        len = 0;
        while (*s && *s == c) // Increment s until it points to a non-spacing character.
            ++s;
        while (*s && *s != c) // Calculate the length of individual string
        { 
            ++s;
            ++len;
        }
        // Allocate memory for individual string
        strArray[i] = ft_calloc(sizeof(char), len);
        while (*s && *s == c) // Increment s until it points to a non-spacing character.
            ++s;
        ++i; // Increment index
    } 
    // strArray[i] = NULL; // Set last value as null
    return strArray; // Return the array of strings  
 }

int main ()
{
    char *string = "1///////////////////2///3///4///5///////";
    int words = ft_countWords(string, '/');
    char  **word = ft_split(string, '/');
    printf("%s", word[1]);
    return (0);
}