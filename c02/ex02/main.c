#include <stdio.h>

int	ft_str_is_alpha(char *str);

int    main(void)
{
    int is_alpha;
    char a[] = "jriwoeu3u45";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}
