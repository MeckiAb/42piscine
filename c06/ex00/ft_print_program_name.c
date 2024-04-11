/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:28:22 by labderra          #+#    #+#             */
/*   Updated: 2024/03/15 12:43:37 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	if (argc)
	{
		while (*args[0])
			write(1, args[0]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
