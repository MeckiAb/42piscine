/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:41:06 by labderra          #+#    #+#             */
/*   Updated: 2024/03/14 18:40:01 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	str1[]="Holad";
	char	str2[]="Hola";
	int size = 6;

	printf("1: %s\n2: %s\nstrncmp: %i\nft_strcmp: %d\nsize : %d\n",str1, 
	str2, strncmp(str1, str2, size), ft_strncmp(str1, str2, size), size);
	return (0);
}
*/
