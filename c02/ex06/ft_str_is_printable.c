/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:12:26 by labderra          #+#    #+#             */
/*   Updated: 2024/03/09 10:54:24 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ret;

	i = 0 ;
	ret = 1;
	while (str[i] != '\0' && ft_char_is_printable(str[i]))
		i++;
	if (str[i] != '\0')
		ret = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	int	is_printable;

	is_printable = ft_str_is_printable(" asdf654ASDF~]*");
	printf("%d", is_printable);
	return (0);
}
*/
