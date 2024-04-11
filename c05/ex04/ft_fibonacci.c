/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:30:45 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 11:17:51 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Fib( %c ) = %d\n", *argv[1], ft_fibonacci(*argv[1]- '0'));
	}
	return (0);
}
*/
