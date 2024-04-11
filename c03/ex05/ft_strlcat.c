/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:22:21 by labderra          #+#    #+#             */
/*   Updated: 2024/03/13 09:57:55 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	k = i;
	while (i < size - 1 && *src != '\0' )
		dest[i++] = *src++;
	if (i < size)
		dest[i] = '\0';
	if (size < i)
		return (size + j);
	else
		return (k + j);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	size=46;
//	char	primera[] = "Primera Cadena \0   y segunda";
	char	primera_ft[] = "Primera Cadena \0   y segunda";
//	char	segunda[] = "y segunda";
	char	segunda_ft[] = "y segunda";

//	printf("1 - %s\n2 - %s\nn - %d\nstrlcat - %lu\n\n", 
//	primera, segunda, size, strlcat(primera, segunda, size));
	printf("1 - %s\n2 - %s\nn - %d\nft_strlcat - %d\n", 
	primera_ft, segunda_ft, size, ft_strlcat(primera_ft, segunda_ft, size));
	return (0);
}
*/
