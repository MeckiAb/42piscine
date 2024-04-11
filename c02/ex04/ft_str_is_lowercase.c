/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:41:18 by labderra          #+#    #+#             */
/*   Updated: 2024/03/09 10:53:15 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ret;

	i = 0 ;
	ret = 1;
	while (str[i] != '\0' && ft_char_is_lowercase(str[i]))
		i++;
	if (str[i] != '\0')
		ret = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	int	is_lower;

	is_lower = ft_str_is_lowercase("asdfkK");
	printf("%d", is_lower);
	return (0);
}
*/
