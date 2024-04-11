/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:06:59 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 14:10:30 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	ret;

	i = 0 ;
	ret = 1;
	while (str[i] != '\0' && ft_char_is_uppercase(str[i]))
		i++;
	if (str[i] != '\0')
		ret = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	int	is_upper;

	is_upper = ft_str_is_uppercase("HASDFA S");
	printf("%d", is_upper);
	return (0);
}
*/
