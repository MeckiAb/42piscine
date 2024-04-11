/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:33:07 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 13:39:44 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ret;

	i = 0 ;
	ret = 1;
	while (str[i] != '\0' && ft_char_is_alpha(str[i]))
		i++;
	if (str[i] != '\0')
		ret = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	int	is_alpha;

	is_alpha = ft_str_is_alpha("");
	printf("%d", is_alpha);
	return (0);
}
*/
