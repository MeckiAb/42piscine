/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:19:48 by labderra          #+#    #+#             */
/*   Updated: 2024/03/09 10:59:06 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char			str1[15]="Hola Mundo!";
	char			str2[15]="12345678901234";
	unsigned int	sz;

//	sz=strlcpy(str1, str2, 15);
//	printf("Dest: %s\nSrc : %s\nSize: %d", str1, str2, sz);

	sz=ft_strlcpy(str1, str2, 15);
	printf("Dest: %s\nSrc : %s\nSize: %d", str1, str2, sz);
	return (0);
}
*/
