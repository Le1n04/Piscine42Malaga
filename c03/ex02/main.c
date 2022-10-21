#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int main()
{
	char *t;
	char b[8] = "cabesa";
	char a[8] = "matado";
	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}