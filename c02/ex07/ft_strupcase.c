/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:48:20 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 16:55:22 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lower(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	alpha[15] = "Hola Mundo!";

	ft_strupcase(alpha);
	printf("%s", alpha);
	return (0);
}
*/
