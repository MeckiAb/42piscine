/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:07:50 by labderra          #+#    #+#             */
/*   Updated: 2024/03/06 11:31:52 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str_1[15];
	char	*str_2;
	int		j=0;

	str_2 = ft_strncpy(str_1, "Hola Mundo 1234", 15);
	while (j<15)
	{
		printf("%d ", str_1[j]);
		j++;
	}
	return (0);
}
*/
