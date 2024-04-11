/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:40:48 by labderra          #+#    #+#             */
/*   Updated: 2024/03/16 17:42:28 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	if (!ft_check_input)
		write(1, "Error\n", 6);
	else if (argc != 2 && argc != 3)
		write(1, "Error\n", 6);
	else
	{
		if (argc = 2)
		{
			argc = 3;
			argv[2] = "./numbers.dict"
		}
		ft_translate(argv[2], argv[3];
	}
	return (0);
}
