/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:17:01 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 20:43:23 by nhajji           ###   ########.fr       */
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

int	is_sep(char ch, char *sep)
{
	while (*sep)
	{
		if (*sep == ch)
			return (1);
		sep++;
	}
	return (0);
}

int	cnt(char	*sep, char	*string, int rol)
{
	int	index;

	index = 0;
	if (rol == 0)
	{
		while (*string)
		{
			if (is_sep(*string, sep))
				return (index);
			index++;
			string++;
		}
		return (index);
	}
	while (*string)
	{
		if (is_sep(*string, sep) == 1)
			string++;
		else
		{
			string = string + cnt(sep, string, 0);
			index++;
		}	
	}
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	char			*copy;

	index = 0;
	copy = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && index < nb)
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char			**strs;
	char			*st;
	int				index;
	int				leng;

	strs = malloc(sizeof(char *) * (cnt(charset, str, 1) + 1));
	if (!strs)
		return (NULL);
	strs[cnt(charset, str, 1)] = NULL;
	index = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			leng = (cnt(charset, str, 0));
			st = malloc(sizeof(char) * (leng + 1));
			st[0] = '\0';
			strs[index++] = ft_strncat(st, str, leng);
			str += leng;
		}
		else
			str++;
	}
	return (strs);
}
