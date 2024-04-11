/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:28:20 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 13:38:29 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ret;

	i = 0 ;
	ret = 1;
	while (str[i] != '\0' && ft_char_is_numeric(str[i]))
		i++;
	if (str[i] != '\0')
		ret = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	int	is_numeric;

	is_numeric = ft_str_is_numeric("1235");
	printf("%d", is_numeric);
	return (0);
}
*/
