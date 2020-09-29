/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 22:07:11 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/15 21:14:52 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
