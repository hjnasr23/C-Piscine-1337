/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:22:49 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 15:16:41 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_of_ints;
	int	*copy;

	if (min >= max)
		return (NULL);
	array_of_ints = (int *)malloc(sizeof(int) * (max - min));
	if (!array_of_ints)
		return (NULL);
	copy = array_of_ints;
	while (min < max)
		*array_of_ints++ = min++;
	return (copy);
}
