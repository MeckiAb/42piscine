/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:06:12 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:19:14 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;

	mod = *a % *b;
	*a = *a / *b;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int a; 
	int b;

	a = 11; 
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
}
*/
