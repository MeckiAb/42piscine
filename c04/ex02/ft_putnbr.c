/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:46:18 by labderra          #+#    #+#             */
/*   Updated: 2024/03/13 18:26:07 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	acc;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		acc = '0' + (nb % 10);
		write(1, &acc, 1);
	}
	else
	{
		acc = '0' + (nb % 10);
		write(1, &acc, 1);
	}
}
/*
int main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
