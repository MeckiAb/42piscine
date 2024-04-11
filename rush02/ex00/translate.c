/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:42:35 by labderra          #+#    #+#             */
/*   Updated: 2024/03/17 07:59:52 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_append(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_kv(char *key, char *dict)

int		ft_length(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*ft_load_dict(char *dictfile)
{
	char				*dict;
	int					retry;
	int					fd;
	unsigned long int	size;
	unsigned long int	cnt;

	retry = 1;
	while ()
	{	
		cnt = sizeof(*dict) * 1024 * retry;
		dict = (char *)malloc(cnt);
		if (dict == NULL)
			return (0);
		fd = open(dictfile, O_RDONLY);
		if (fd == -1)
		{
			write(1, "Dict Error\n", 11);
			free(dict);
			return (0);
		}
		size = read(fd, dict, cnt)

		
}

int	ft_translate(char *input, char *dictfile)
{
	char	*result;
	char	*dict;
	char	*key;
	int 	groups;
	int		i;

	dict = ft_load_dict(dictfile);
	if (dict == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	input_length = ft_length(input);
	result = (char *)malloc(sizeof(*result) * input_length * 99 / 3);
	if (result == NULL)
		return(0);
	groups = (ft_length(input) - 1) / 3;
	while (groups >= 0)
	{
		if (input[0] != '0')
		{
			key = "100";
			ft_append(result, ft_kv(input[0], dict));
			ft_append(result, ft_kv(key, dict));
		}
		if (input[1] == '1')
		{
			key = ft_append(input[1], input[2]);
			ft_append(result, ft_kv(key, dict));
		}
		else if (input[1] == '0')
		{
			ft_append(result, ft_kv(input[2], dict));
		}
		else
		{
			key = ft_append(input[1], "0");
			ft_append(result, ft_kv(key, dict));
			if (input[2] != '0')
				ft_append(result, ft_kv(input[2], dict));
		}
		if (groups > 0)
		{
			i = 0;
			key = '1';
			while (i < groups)
			{
				ft_append(key, "000");
				i++;
			}
			ft_append(result, ft_kv(key, dict));
		}
		groups--;
	}






		012 345 678 901
		012.526.589.650
