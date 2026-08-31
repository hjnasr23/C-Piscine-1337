/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 07:53:49 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/18 12:42:20 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
