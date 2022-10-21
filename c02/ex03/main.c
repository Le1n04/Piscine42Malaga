#include <stdio.h>

int ft_str_is_numeric(char *str);

int    main(void)
{
    int is_numeric;
    char a[] = "123";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
