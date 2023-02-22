#include <stdio.h>
#include <string.h>

char	*ft_strch(const char *s, char *c)
{
	while (*s != (unsigned char)c && *s != '\0')
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	else
		return (NULL);
}

int main () {
    char str[] = "http://www.tutorialspoint.com";
    char *ch = ".t";
   char *ret;

   ret = ft_strch(str, (char *)ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}