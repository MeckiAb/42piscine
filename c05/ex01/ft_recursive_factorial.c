/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:11:14 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 10:16:55 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%c! = %d\n", *argv[1], ft_recursive_factorial(*argv[1]- '0'));
	}
	return (0);
}
*/
