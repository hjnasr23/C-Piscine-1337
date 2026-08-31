/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:47:47 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/17 14:24:59 by nhajji           ###   ########.fr       */
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

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	index;
	unsigned int	size_of_src;

	index = 0;
	size_of_src = ft_strlen(src);
	if (size == 0)
		return (size_of_src);
	while (index < size - 1 && *src != '\0')
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (size_of_src);
}
