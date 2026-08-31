/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 17:03:22 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/30 08:45:21 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isp(char *sep, char ch)
{
	while (*sep)
	{
		if (*sep == ch)
			return (1);
		sep++;
	}
	return (0);
}

int	nbr_of_strs(char *st, char *sp)
{
	int	index;

	index = 0;
	if (*st == '\0')
		return (0);
	if (isp(sp,*st) == 0)
		index++;
	while (*st)
	{
		if (isp(sp, *st) == 1 && isp(sp, *(st + 1)) == 0 && *(st + 1) != '\0')
			index++;
		st++;
	}
	return (index);
}

int	st_sz(char *str, char *sep)
{
	int	index;

	index = 0;
	while (isp(sep, *str) == 0 && *str)
	{
		index++;
		str++;
	}
	return (index);
}

char	*ft_strncpy(char	*dest, char		*src, unsigned int n)
{
	char			*copy;
	unsigned int	i;

	copy = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char			**strings;
	char			*string;
	unsigned int	nbr_of_strings;
	char			**copy;
	int				idx;

	nbr_of_strings = nbr_of_strs(str, charset) + 1;
	strings = (char **)malloc(sizeof(char *) * nbr_of_strings);
	if (!strings)
		return (NULL);
	strings[nbr_of_strings - 1] = NULL;
	copy = strings;
	idx = 0;
	while (str[idx])
	{
		while (isp(charset, str[idx]) == 1 && str[idx] != '\0')
			idx++;
		if (str[idx] == '\0')
			break ;
		string = malloc(sizeof(char) * (st_sz(&str[idx], charset) + 1));
		string[st_sz(&str[idx], charset)] = '\0';
		*strings++ = ft_strncpy(string, &str[idx], st_sz(&str[idx], charset));
		idx += st_sz(&str[idx], charset);
	}
	return (copy);
}
