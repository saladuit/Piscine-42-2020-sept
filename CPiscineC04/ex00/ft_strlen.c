/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 21:13:36 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/24 21:23:58 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int 	main()
{
	char d[50] = "Hallo";
	int i;
	i = ft_strlen(d);
	printf("%d", i);
	return(0);
}
