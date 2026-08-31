/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:16:55 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/17 15:57:02 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
