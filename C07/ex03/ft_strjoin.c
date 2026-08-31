/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:03:01 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 20:24:35 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	char	*copy;

	copy = str;
	while (*str)
		str++;
	return (str - copy);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = len(dest);
	src_size = len(src);
	index = dest_size;
	if (size <= dest_size)
		return (size + src_size);
	while (*dest != '\0')
		dest++;
	while (index < size - 1 && *src != '\0')
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (src_size + dest_size);
}

int	allocation(char **string, int sum)
{
	*string = (char *)malloc(sizeof(char) * sum);
	if (!(*string))
		return (0);
	(*string)[0] = '\0';
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		sum;
	int		index;
	int		string_size;

	sum = 0;
	index = 0;
	while (index < size)
		sum += len(strs[index++]);
	string_size = sum + len(sep) * (size - 1) + 1;
	if (size <= 0)
		string_size = 1;
	if (!allocation(&string, string_size))
		return (NULL);
	index = 0;
	while (index < size)
	{
		ft_strlcat(string, strs[index], string_size);
		if (index < size - 1)
			ft_strlcat(string, sep, string_size);
		index++;
	}
	return (string);
}
