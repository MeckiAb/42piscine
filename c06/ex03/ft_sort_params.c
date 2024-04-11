/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:16:40 by labderra          #+#    #+#             */
/*   Updated: 2024/03/15 12:46:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_bubblestr(char **str, int size)
{
	int		i;
	int		j;
	char	*ptr;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[j], str[i]) < 0)
			{
				ptr = str[i];
				str[i] = str[j];
				str[j] = ptr;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	argv = ft_bubblestr(argv, argc);
	i = 1;
	while (i <= argc -1)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
