#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	unsigned int n;
	n = 5;
	char src[] = "olalala";
	char dest[n];
	printf("%s\n", ft_strncpy(dest, src, n ));
	printf("%s\n", strncpy(dest, src, n ));
}
