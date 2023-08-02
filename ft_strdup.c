#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void    ft_memcpy(void *dest, void *src, unsigned int number)
{
    char    *csrc;
    char    *cdest;
    unsigned int    i;

    i = 0;
    csrc = src;
    cdest = dest;
    while (i < number)
    {
        cdest[i] = csrc[i];
        i++;
    }
}

char    *ft_strdup(char *str)
{
    unsigned int    len;
    char    *copy;

    len = ft_strlen(str) + 1;
    copy = malloc((unsigned int)len);
    if (!copy)
    {
        return (0);
    }
    return (str);
}
 
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}