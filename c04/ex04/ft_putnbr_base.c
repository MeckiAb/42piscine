/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:49 by labderra          #+#    #+#             */
/*   Updated: 2024/03/14 19:10:31 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_valid_base(char *base)

{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0' || base[0] == '-' || base[0] == '+')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_n;

	base_n = ft_valid_base(base);
	if (base_n > 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nbr / base_n, base);
			write(1, &base[-nbr % base_n], 1);
		}
		else if (nbr >= base_n)
		{
			ft_putnbr_base(nbr / base_n, base);
			write(1, &base[nbr % base_n], 1);
		}
		else
			write(1, &base[nbr % base_n], 1);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int		numerito = -29;
	char	base[] = "01234567";

	printf("%d\n", ft_valid_base(base));
	ft_putnbr_base(numerito, base);
	return (0);
}
*/
