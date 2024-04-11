/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:02:42 by labderra          #+#    #+#             */
/*   Updated: 2024/03/21 20:55:38 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		ptr = malloc(sizeof(int) * (max - min));
		if (ptr == NULL)
			return (NULL);
		while (i < (max - min))
		{
			ptr[i] = i + min;
			i++;
		}
		return (ptr);
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	i;
	int	*ptr;

	ptr = ft_range(-1, 5);
	i = 0;
	while (i < 6)
		printf("%d\n",ptr[i++]);
	free(ptr);
	return (0);
}
*/
