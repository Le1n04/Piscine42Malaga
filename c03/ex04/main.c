#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    char haystack[] = "This is the way.";
    char needle[] = "the";

    char *the = ft_strstr(haystack, needle);
    char *thee = strstr(haystack, needle);

    printf("the: %s\n", the);
    printf("the: %s\n", thee);

    return (0);
}