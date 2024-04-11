/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:43:51 by labderra          #+#    #+#             */
/*   Updated: 2024/03/09 11:01:16 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_tohex(char *cn, char num)
{
	cn[0] = '\\';
	cn[1] = '0' + num / 16;
	if (num % 16 < 10)
		cn[2] = '0' + num % 16;
	else
		cn[2] = 87 + num % 16;
	return (cn);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			c[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else if (str[i] < 31)
		{
			ft_tohex(c, str[i]);
			write(1, c, 3);
		}
		else
		{
			write(1, "\\7f", 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("asdf654\a6132asdfafhadfh""\n");
	ft_putstr_non_printable("asdf654\e6132asdfafhadfh");
	return (0);
}
*/
