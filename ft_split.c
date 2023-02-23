/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:41:13 by ldufour           #+#    #+#             */
/*   Updated: 2023/02/22 20:34:57 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    char **strArray = NULL; // array of strings to be returned 
    size_t i  = 0; // initializing index
    size_t j  = 0; // sub-index
    size_t len = 0; // length of a single string in the array

    if (!s)
        return NULL;
    // Allocate memory for the array
    strArray = malloc(ft_countWords(s, 'c') + 1);

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
        strArray[i] = ft_strsub(s, 0, len);
        while (*s && *s == c) // Increment s until it points to a non-spacing character.
            ++s;
        ++i; // Increment index
    } 
    strArray[i] = NULL; // Set last value as null
    return strArray; // Return the array of strings  
 }
