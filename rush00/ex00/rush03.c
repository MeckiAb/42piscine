/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:15:26 by drosales          #+#    #+#             */
/*   Updated: 2024/03/03 18:11:06 by labderra         ###   ########.fr       */
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
				if ((row == 1 && col == 1) || (row == y && col == 1))
					ft_putchar('A');
				else if ((row == 1 && col == x) || (row == y && col == x))
					ft_putchar('C');
				else if (row == 1 || row == y || col == 1 || col == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
