#include <stdio.h>

int ft_str_is_printable(char *str);

int    main(void)
{
    int is_printable;
    char a[] = "hola\n";
    is_printable = ft_str_is_printable(a);
    printf("%d\n", is_printable);
}
