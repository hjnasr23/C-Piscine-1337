/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:57:58 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/18 12:43:44 by nhajji           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
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
