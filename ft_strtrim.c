/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leon <leon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:03:44 by leon              #+#    #+#             */
/*   Updated: 2023/02/21 17:53:59 by leon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
	while ()
	
	char *trim;

	return(trim);
}

int main ()
{
	char * s = ft_strtrim("   xxxtripouille", " x");
	s = ft_strtrim("tripouille   xxx", " x");
	s = ft_strtrim("   xxxtripouille   xxx", " x");
	s = ft_strtrim("   xxx   xxx", " x");
	s = ft_strtrim("", "123");
	s = ft_strtrim("123", "");
	s = ft_strtrim("", "");					
	s = ft_strtrim("", "");
	s = ft_strtrim("abcdba", "acb");
}