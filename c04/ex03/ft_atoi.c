/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:36:54 by labderra          #+#    #+#             */
/*   Updated: 2024/03/14 19:09:06 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	acc;
	int	sign;

	sign = 1;
	acc = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		acc = acc * 10 + *str - 48;
		str++;
	}
	return (sign * acc);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[]=" ---+--+41234ab567";

	printf("%s\n%d\n", str, ft_atoi(str));
	return (0);
}
*/
