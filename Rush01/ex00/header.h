/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:42:57 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/20 00:22:32 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

# include <unistd.h>

int			is_valid(char number, char grid[9][9], int row, int column);
int			latinsquare(char grid[9][9], int i, int j);
void	build_table(char **argv, char grid[9][9]);
int 		ft_strlen(char *str);
int			line_is_valid(char *str);
int			input_is_valid(int argc, char **argv);
void	print_table(char grid[9][9]);

#endif
