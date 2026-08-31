/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:04:42 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/18 10:25:51 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (*s1 != '\0' && *s1 == *s2 && index < n - 1)
	{
		s1++;
		s2++;
		index++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!ft_strlen(to_find))
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find && !ft_strncmp(str, to_find, ft_strlen(to_find)))
			return (str);
		str++;
	}
	return (0);
}
