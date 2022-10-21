#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str;

	str = "Tiene 19 caracteres";
	printf("Devuelve (19): %d\n", ft_strlen(str));
}
