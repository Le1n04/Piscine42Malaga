#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	char a[20] = "1234";
	char b[20] = "56789";
	int t = ft_strlcat(a, b, 3);
	printf("%d\n", t);
	int y = strlcat(a, b, 3);
	printf("%d\n", y);
	return (0);
}