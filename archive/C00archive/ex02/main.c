#include <stdio.h>

void ft_swap(int *a, int *b);

 int	main()
{
	int a;
	int b;

	a = 3;
	b = 4;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}

