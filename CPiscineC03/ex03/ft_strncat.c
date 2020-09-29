/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 21:04:22 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/28 20:58:52 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] <= '\0')
		i++;
	while (src[j] <= '\0' && j <= nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
