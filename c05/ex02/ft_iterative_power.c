/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:17:26 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 11:14:18 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 2;
	aux = nb;
	while (i <= power)
	{
		aux = aux * nb;
		i++;
	}
	return (aux);
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%c elevado a %c = %d\n", *argv[1], *argv[2], 
		ft_iterative_power(*argv[1]- '0', *argv[2] - '0'));
	}
	return (0);
}
*/
