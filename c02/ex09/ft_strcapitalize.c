/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:18:24 by labderra          #+#    #+#             */
/*   Updated: 2024/03/09 10:56:34 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_isalpha(char c)
{
	return ((c > 47 && c < 58) || (c > 96 && c < 123) || (c > 64 && c < 91));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i != 0)
		{
			if (!ft_isalpha(str[i - 1]) && str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char	salut[]="salut, comment";

	printf("%s\n",salut);
	printf("%s",ft_strcapitalize(salut));
	return (0);
}
*/
