#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;
	a = 10;
	b = 4;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}
