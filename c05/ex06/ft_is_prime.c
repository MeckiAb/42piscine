/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:39:07 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 11:29:40 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_ceil(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	end;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	end = ft_sqrt_ceil(nb);
	while (i <= end)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%c es primo = %d\n", 
 *argv[1], ft_is_prime(*argv[1]- '0'));
	}
	return (0);
}
*/
