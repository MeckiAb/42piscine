/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:01:07 by labderra          #+#    #+#             */
/*   Updated: 2024/02/29 14:36:18 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra_actual;

	letra_actual = 'a';
	while (letra_actual <= 'z')
	{
		write (1, &letra_actual, 1);
		letra_actual += 1;
	}
}
