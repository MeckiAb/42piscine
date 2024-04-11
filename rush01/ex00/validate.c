/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:46:17 by labderra          #+#    #+#             */
/*   Updated: 2024/03/10 21:41:55 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validate_input(char *input)
{
	int		i;
	int		j;

	i = 0;
	while (input[i] != '\0')
		i++;
	if (i != 31)
		return (0);
	i = 0;
	j = 0;
	while (j < 16)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			input[j++] = input[i];
			i += 2;
		}
		else
		{
			return (0);
		}
	}
	input[16] = '\0';
	return (1);
}

char	ft_check_comb(char a, char b, char c)
{
	char	result;

	if (a == '4')
		result = '1';
	else if ((a == '3') || (b == '4') || ((a == '2')
			&& (b == '1') && (c == '4')))
		result = '2';
	else if (a == '1' && b == '2' && c == '3')
		result = '4';
	else
		result = '3';
	return (result);
}

int	ft_check_repetition(char a, char b, char c, char d)
{
	return (a != b && a != c && a != d && b != c && b != d && c != d);
}

void	ft_init_test(char *test, int *i)
{
	*i = 0;
	while (*i < 16)
	{
		test[*i] = 'a';
		*i += 1;
	}
	test[16] = '\0';
	*i = 0;
}

int	ft_validate_board(char *tab, char *input)
{
	int		i;
	char	test[17];

	ft_init_test(test, &i);
	while (i < 4)
	{
		test[i] = ft_check_comb(tab[i], tab[i + 4], tab[i + 8]);
		test[i + 4] = ft_check_comb(tab[i + 12], tab[i + 8], tab[i + 4]);
		test[i + 8] = ft_check_comb(tab[4 * i], tab[(4 * i) + 1],
				tab[(4 * i) + 2]);
		test[i + 12] = ft_check_comb(tab[(4 * i) + 3], tab[(4 * i) + 2],
				tab[(4 * i) + 1]);
		if ((input[i] == test [i]) && (input[i + 4] == test[i + 4])
			&& (input[i + 8] == test [i + 8]) && (input[i + 12]
				== test [i + 12]) && ft_check_repetition(tab[4 * i],
				tab[4 * i + 1], tab[4 * i + 2], tab[4 * i + 3])
			&& ft_check_repetition(tab[i], tab[i + 4], tab[i + 8], tab[i + 12]))
			i++;
		else
			return (0);
	}
	return (1);
}
