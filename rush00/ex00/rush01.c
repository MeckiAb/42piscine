/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:15:26 by drosales          #+#    #+#             */
/*   Updated: 2024/03/03 17:51:47 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x > 0 && y > 0)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				if ((row * col == 1) || (row * col == x * y && !y && !x))
					ft_putchar('/');
				else if ((row == 1 && col == x) || (row == y && col == 1))
					ft_putchar('\\');
				else if (row == 1 || row == y || col == 1 || col == x)
					ft_putchar('*');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
