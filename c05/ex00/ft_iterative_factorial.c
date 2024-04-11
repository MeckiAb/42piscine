/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:41:36 by labderra          #+#    #+#             */
/*   Updated: 2024/03/17 10:03:11 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb > 0)
	{
		i = nb;
		while (i > 1)
			nb = nb * --i;
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("ft_iterative_factorial(5) : %i", ft_iterative_factorial(-5));
	return (0);
}
*/
