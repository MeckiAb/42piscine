/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:47:58 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:23:42 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int size_tab;
	int index;
	int list[10] = {4, 8, 9, 0, 2, 7, 3, 1, 5, 6};

	size_tab = 10;
	index = 0;
	while (index < 10)
	{
		printf("%d",list[index]);
		index++;
	}
	printf("\n");
	ft_sort_int_tab(list, size_tab);
	index = 0;
	while (index < 10)
	{
		printf("%d",list[index]);
		index++;
	}
	return (0);	
}
*/
