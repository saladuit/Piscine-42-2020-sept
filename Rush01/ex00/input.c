/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:51:52 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/19 22:46:40 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while(*str)
	{
		l++;
		str++;
	}
	return(1);
}

int 		line_is_valid(char *str)
{
	if (ft_strlen(str) != 9)  // needs other value
	{
		return (0);
	}
	while(*str)
	{
		if (('1' <= *str && *str <=  '9') || *str == '.') // needs other values
			str++;
		else
			return (0);
	}
	return (1);
}

int 		input_is_valid(int argc, char **argv)
{
	int i;
	if (argc != 10) // needs other values
	{
		return (0);
	}
	i = 1;
	while (i < 10) //need other values
	{
		if (!(line_is_valid(argv[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
