/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:38:37 by labderra          #+#    #+#             */
/*   Updated: 2024/02/29 14:47:39 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra_actual;

	letra_actual = 'z';
	while (letra_actual >= 'a')
	{
		write (1, &letra_actual, 1);
		letra_actual -= 1;
	}
}
