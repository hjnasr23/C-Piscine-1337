/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:40:07 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/18 12:43:04 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
