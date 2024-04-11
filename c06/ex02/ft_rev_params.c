/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:09:52 by labderra          #+#    #+#             */
/*   Updated: 2024/03/15 12:44:12 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
