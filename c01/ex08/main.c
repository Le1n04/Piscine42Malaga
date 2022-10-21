#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[9] = {11,2,3,6,1,94,23,12,8};
	ft_sort_int_tab(tab, 9);
	for(int i=0; i < 9; i++)
	{
		printf("%d ", tab[i]);
	}
}
