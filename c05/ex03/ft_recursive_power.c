/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:27:08 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 11:15:44 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%c! = %d\n", *argv[1], 
		ft_recursive_power(*argv[1]- '0', *argv[2] - '0'));
	}
	return (0);
}
*/
