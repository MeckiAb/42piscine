/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:54:08 by labderra          #+#    #+#             */
/*   Updated: 2024/03/03 11:47:56 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int		combinacion;
	char	unidad;
	char	decena;
	char	centena;

	combinacion = 12;
	while (combinacion < 789)
	{
		unidad = '0' + ((combinacion % 100) % 10);
		decena = '0' + ((combinacion % 100) / 10);
		centena = '0' + (combinacion / 100);
		if (unidad > decena && decena > centena)
		{
			write (1, &centena, 1);
			write (1, &decena, 1);
			write (1, &unidad, 1);
			write(1, ", ", 2);
		}
		combinacion++;
	}
	write (1, "789", 3);
}
