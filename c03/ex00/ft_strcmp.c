/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:41:06 by labderra          #+#    #+#             */
/*   Updated: 2024/03/11 13:04:51 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	str1[]="Hola 1";
	char	str2[]="Hola 5";

	printf("Cadena 1: %s\nCadena 2: %s\nstrcmp: %d\nft_strcmp: %d\n"
			,str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	return (0);
}
*/
