/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:49:54 by labderra          #+#    #+#             */
/*   Updated: 2024/03/21 20:54:35 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	char	src[] = "hola";
	char	*ptr;
	
	ptr = ft_strdup(src);
	printf("%s", ptr);
}
*/
