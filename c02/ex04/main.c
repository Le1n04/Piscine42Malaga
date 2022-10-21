#include <stdio.h>

int ft_str_is_lowercase(char *str);

int    main(void)
{
    int islower;
    char a[] = "123";
    islower = ft_str_is_lowercase(a);
    printf("%d\n", islower);
}
