/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:28:26 by labderra          #+#    #+#             */
/*   Updated: 2024/03/11 16:52:11 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_str_rev(char *str, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = str[i];
		str[i] = str[size];
		str[size] = c;
		i++;
		size--;
	}
	return (str);
}

char	*ft_itoa(unsigned long int n, char *str, unsigned int base, int is_char)
{
	int					i;
	unsigned long int	mod;

	if (is_char == 1)
		n = n % 256;
	i = 0;
	while (n > 0)
	{
		mod = n % base;
		if (mod >= 10)
			str[i++] = 'a' + mod - 10;
		else
			str[i++] = '0' + mod;
		n = n / base;
	}
	while (i < 2)
		str[i++] = '0';
	str[i] = '\0';
	return (ft_str_rev(str, i - 1));
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, ".", 1);
			i++;
		}
	}
}

void	ft_putmemaddress(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i < 16)
	{	
		ft_putstr("0");
		i++;
	}
	ft_putstr(str);
	ft_putstr(": ");
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest [i] = 0;
	return (i);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	char			str[33];
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size)
	{
		ft_strlcpy(str, ft_itoa((unsigned long int) addr, str, 16, 0),33 );
		ft_putmemaddress(str);
		j = 0;
		while (j < 16)
		{
			if (j < (size - i))
			{
				ft_putstr(ft_itoa(*(unsigned long int *)&addr[j++], str, 16, 1));
				ft_putstr(ft_itoa(*(unsigned long int *)&addr[j++], str, 16, 1));
				ft_putstr(" ");
			}
			else
			{
				ft_putstr("     ");
				j += 2;
			}
		}
		ft_strlcpy(str, (char *)&addr[i], 17);
		ft_putstr(str);
		write(1, "\n", 1);
		i += 16;
		addr += 16;
	}
	return (addr);
}


int main(void)
{
	char string[]="Hola Mun\vdo Mondongo asdfasdfasdfasdfasdfasdfasdfasdfasdffasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdfasdf";
	ft_print_memory(string, 68);
//	printf("\n%p", string);
//	ft_putstr(ft_inttohex(' ',string));
	


	return (0);
}

