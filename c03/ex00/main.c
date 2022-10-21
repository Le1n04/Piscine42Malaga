#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	printf("%d", ft_strcmp("olakasd", "olakasdkdjfhgkdjfhgkdjffhgk"));
	printf("\n%d", ft_strcmp("ola", "ol"));
	printf("\n%d", ft_strcmp("ol", "olaka"));
	printf("\n%d", ft_strcmp("olakase", "olakase"));
}