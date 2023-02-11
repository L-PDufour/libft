#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

#include <stdio.h>
int main()
{
    char s1[] = "Tripouille";
    char s2[] = "Tripouille";
    printf ("%s", ft_strncpy(s2, s1, 4));
}
