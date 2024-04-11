/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:57:13 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 17:04:25 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_up(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_up(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	alpha[15] = "Hola Mundo!";

	ft_strlowcase(alpha);
	printf("%s", alpha);
	return (0);
}
*/
