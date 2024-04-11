/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:21:24 by labderra          #+#    #+#             */
/*   Updated: 2024/03/14 19:03:38 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0'
		|| base[0] == '-' || base[0] == '+' || base[0] == ' ')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '-'
				|| base[j] == '+' || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	acc;
	int	sign;
	int	base_n;

	base_n = ft_valid_base(base);
	if (base_n == 0)
		return (0);
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
	while (ft_is_in_base(*str, base) != -1)
	{
		acc = acc * base_n + ft_is_in_base(*str, base);
		str++;
	}
	return (sign * acc);
}
/*
#include <stdio.h>

int	main(void)
{
	char	numerito[] = "   	  	 ++-+++--256135a3546";
	char	base[] = "01234567";

	printf("%d\n", ft_atoi_base(numerito, base));
	return (0);
}
*/
