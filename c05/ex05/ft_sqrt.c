/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:35:23 by labderra          #+#    #+#             */
/*   Updated: 2024/03/18 11:19:14 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Raiz de %c = %d\n", *argv[1], ft_sqrt(*argv[1]- '0'));
	}
	return (0);
}
*/
