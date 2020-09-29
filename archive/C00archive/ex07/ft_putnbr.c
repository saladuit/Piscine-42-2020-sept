/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:43:22 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/16 17:17:48 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char i[10];
	int x;

	x = 9;
	if (nb < 0)
		write(1, "-", 1);
	if (nb > 0)
		nb = -nb;
	if (nb == -2147483648)
	{
		write(1, "214748364", 10);
		write(1, "8", 1);
	}
	else
		while (nb)
		{
			i[x] = -nb % 10 + 48;
			nb /= 10;
			x--;
		}
	write(1, &i, 10);
	write(1, "", 1);
}
