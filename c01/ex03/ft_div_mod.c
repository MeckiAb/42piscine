/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:10:05 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:18:45 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int aa;
	int bb;
	int division;
	int modulo;

	aa = 11;
	bb = 3;
	modulo = 0;
	division = 0;
	ft_div_mod(aa, bb, &division, &modulo);
	printf("%d, %d, %d, %d", aa, bb, division, modulo);
	return (0);
}
*/
