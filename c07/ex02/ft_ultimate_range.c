/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:41:10 by labderra          #+#    #+#             */
/*   Updated: 2024/03/21 20:56:18 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (-1);
	else
	{
		ptr = malloc(sizeof(int) * (max - min));
		if (ptr == NULL)
			return (0);
		while (i < (max - min))
		{
			ptr[i] = i + min;
			i++;
		}
		*range = ptr;
		return (i);
	}
}
/*
#include <stdio.h>
int main(void)
{
	int	i;
	int	res;
	int	*ptr;

	res = ft_ultimate_range(&ptr,-1, 5);
	i = 0;
	while (i < 6)
		printf("%d\n", ptr[i++]);
	free(ptr);
	return (0);
}
*/
