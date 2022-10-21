#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char a[20] = "1234";
	char b[20] = "56789";
	char *t = ft_strncat(a, b, 3);
	printf("%s\n", t);
	return (0);
}