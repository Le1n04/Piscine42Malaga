#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "prueba";
	char dest[] = "";
	printf(":%s:\n", dest);
	ft_strcpy(dest, src);
	printf(":%s:\n", dest);
	return (0);
}
