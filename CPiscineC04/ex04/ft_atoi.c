/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 19:06:43 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/29 19:59:03 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi(char *str)
{
	int min;
	int result;

	result = 0;
	min = 1;
	while (*str == '\t' || *str == '\n' || *str == ' ' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * min);
}

int main()
{
	char *str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}


