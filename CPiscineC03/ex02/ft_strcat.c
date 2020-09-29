/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 20:53:19 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/24 21:03:21 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	c = 0;
	i = 0;
	while (dest[j] != '\0')
	j++;
	while (src[i] != '\0')
		dest[j] = src[i];
	i++;
	return (dest);
}
