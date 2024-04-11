/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:55:04 by labderra          #+#    #+#             */
/*   Updated: 2024/03/04 14:22:49 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size - index -1];
		tab[size - index -1] = temp;
		index++;
		size--;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int index;
	int list[4];

	index = 0;
	while (index < 4)
	{
		list[index] = index;
		index++; 
	}
	index=0;
	while (index < 4)
	{
		printf("%d ", list[index]);
		index++;				
	}
	printf("\n");
	ft_rev_int_tab(list, 4);
	index=0;
	while (index < 4)
	{
		printf("%d ", list[index]);
		index++;				
	}
	return (0);
}
*/
