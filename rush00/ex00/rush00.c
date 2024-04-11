/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosales <drosales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:15:26 by drosales          #+#    #+#             */
/*   Updated: 2024/03/03 17:02:21 by labderra         ###   ########.fr       */
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
				if ((col == 1 || col == x) && (row == y || row == 1))
					ft_putchar('o');
				else if (row == 1 || row == y)
					ft_putchar('-');
				else if (col == 1 || col == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
