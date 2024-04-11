/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:36:15 by labderra          #+#    #+#             */
/*   Updated: 2024/03/11 17:03:59 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char 	str1[16]="12345";
//	char	str2[16]="abcde";
	char	str3[16]="jklmn";

	printf("Cadena 1: %s\nCadena 2: %s\nstrcat: \nft_strcat: %s\n",
			str3, str1, ft_strncat(str1, str3, 3));
	return (0);
}
*/
