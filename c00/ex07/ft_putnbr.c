/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:07:05 by labderra          #+#    #+#             */
/*   Updated: 2024/03/03 13:13:05 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_screen(int valor)
{
	valor = '0' + valor;
	write(1, &valor, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb / 10);
	}
	else if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_print_screen(nb % 10);
}
