#include <stdio.h>

char    *ft_strupcase(char *str);

int main()
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 