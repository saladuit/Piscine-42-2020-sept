/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 09:17:02 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/16 11:03:29 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	convert(int c);

void	ft_print_comb2(void)
{
	int comb[2];

	comb[0] = 0;
	while (comb[0] <= 98)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 99)
		{
			convert(comb[0]);
			ft_putchar(' ');
			convert(comb[1]);
			if (!(comb[0] == 98 && comb[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb[1]++;
		}
		comb[0]++;
	}
}

void	convert(int c)
{
	ft_putchar(c / 10 + 48);
	ft_putchar(c % 10 + 48);
}
