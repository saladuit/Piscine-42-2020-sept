void	ft_putchar(char ptr);
{
	write(1, &ptr, 1);
}
void 	ft_putnbr(int ptr);
{
	write(1, &ptr, 1);
}
void	ft_putaddr(void *ptr):
{
	write(1, &ptr, 1);
}

int 	main(void)
{
	pint tab[10];

	tab[0] = 42;
	ftputaddr(tab);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
