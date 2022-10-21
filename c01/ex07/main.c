#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int size;
	int tab[20];

	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = size -i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
	printf("%d: %d\n", i + 1, tab[i]);
	i++;
	}
}
