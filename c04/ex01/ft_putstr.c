/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:57:21 by labderra          #+#    #+#             */
/*   Updated: 2024/03/13 10:38:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/*

int	main(void)
{
	ft_putstr("Hola Hola Mundo Mondongo!!");
	ft_putstr("Hola Hola Mundo Mondongo!!");
	return (0);
}
*/
