/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:38:33 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:21:44 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str != '\0')
	{
		index++;
		str++;
	}
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	int resultado;

	resultado = ft_strlen("Hola Mundo!");
	printf("%d", resultado);
	return (0);
}
*/
