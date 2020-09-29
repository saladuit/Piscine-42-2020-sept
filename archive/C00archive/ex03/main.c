#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int 	main()
{
	int pd;
	int pm;

	ft_div_mod(6, 7, &pd, &pm);

	printf("%d\n", pd);
	printf("%d\n", pm);
	return (0);
}
