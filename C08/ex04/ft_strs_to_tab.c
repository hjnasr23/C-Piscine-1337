/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 08:54:49 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/28 10:03:01 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char		*dest, char		*src)
{
	char	*copy;

	copy = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (copy);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*str_dup;

	count = ft_strlen(src);
	str_dup = (char *)malloc(sizeof(char) * (count + 1));
	if (!str_dup)
		return (NULL);
	return (ft_strcpy(str_dup, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	char		**copy1;
	t_stock_str	*copy2;

	strs = (t_stock_str *)malloc(sizeof(t_stock_str) *(ac + 1));
	if (!strs)
		return (NULL);
	(strs + ac)->str = 0;
	copy2 = strs;
	copy1 = av;
	while (copy1 < av + ac)
	{
		strs->size = ft_strlen(*copy1);
		strs->str = *copy1;
		strs->copy = ft_strdup(*copy1);
		if (!strs->copy)
			return (NULL);
		strs++;
		copy1++;
	}
	return (copy2);
}
