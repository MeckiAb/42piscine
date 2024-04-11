/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:06:54 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:08:43 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int		aa;
	int		bb;
	int		*p_a;
	int		*p_b;

	aa = 5;
	bb = 7;
	p_a = &aa;
	p_b = &bb;
	ft_swap(p_a, p_b);
	printf("%d %d\n", aa, bb);
	return (0);
}
*/
