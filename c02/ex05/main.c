#include <stdio.h>

int ft_str_is_uppercase(char *str);

int    main(void)
{
    int isupper;
    char a[] = "AbZ";
    isupper = ft_str_is_uppercase(a);
    printf("%d\n", isupper);
}
