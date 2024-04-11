/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:02:30 by labderra          #+#    #+#             */
/*   Updated: 2024/03/03 11:57:22 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_duo(int left, int right)
{
	char	digit;

	digit = '0' + left / 10;
	write (1, &digit, 1);
	digit = '0' + left % 10;
	write(1, &digit, 1);
	write(1, " ", 1);
	digit = '0' + right / 10;
	write (1, &digit, 1);
	digit = '0' + right % 10;
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	val_left;
	int	val_right;

	val_left = 0;
	while (val_left < 99)
	{
		val_right = val_left + 1;
		while (val_right < 100)
		{
			ft_print_duo(val_left, val_right);
			if (val_left != 98)
				write(1, ", ", 2);
			val_right++;
		}
		val_left++;
	}
}
