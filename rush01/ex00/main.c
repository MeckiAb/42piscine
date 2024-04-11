/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:48:40 by labderra          #+#    #+#             */
/*   Updated: 2024/03/10 22:00:55 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_validate_input(char *input);

void			ft_setup_board(char *tab);

int				ft_validate_board(char *tab, char *input);

unsigned int	ft_next_board(char *tab);

void			ft_print_board(char *tab);

int	main(int argc, char **argv)
{
	int		exit;
	char	board[17];

	if ((argc != 2) || (!ft_validate_input(argv[1])))
	{
		write(1, &"Error\n", 6);
		return (0);
	}
	ft_setup_board(board);
	exit = 1;
	while (!(ft_validate_board(board, argv[1])) || (exit == 0))
		exit = ft_next_board(board);
	if (exit)
		ft_print_board(board);
	else
		write(1, "Error\n", 6);
	return (0);
}
