/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:51:21 by labderra          #+#    #+#             */
/*   Updated: 2024/03/10 21:15:36 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_setup_board(char *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i] = '1';
		i++;
	}
	tab[16] = '\0';
}

unsigned int	ft_board_to_int4(char *tab)
{
	int				i;
	unsigned int	acc;

	i = 0;
	acc = 0;
	while (i < 16)
		acc = acc * 4 + tab[i++] - 49;
	return (acc);
}

void	ft_int4_to_board(int n, char *tab)
{
	int	i;

	i = 15;
	while (i >= 0)
	{
		tab[i--] = (n % 4) + '1';
		n = n / 4;
	}
}

unsigned int	ft_next_board(char *tab)
{
	unsigned int	tab_num;

	tab_num = ft_board_to_int4(tab);
	if (tab_num < 4294967295)
		ft_int4_to_board(tab_num + 1, tab);
	else
		return (0);
	return (1);
}

void	ft_print_board(char *tab)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &tab[c++], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
