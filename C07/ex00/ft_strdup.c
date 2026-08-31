/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:55:27 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 14:40:41 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*copy;

	copy = str;
	while (*str)
		str++;
	return (str - copy);
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
