/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:37:55 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 18:05:28 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	min_copy;
	int	index;

	min_copy = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	index = 0;
	while (min < max)
	{
		(*range)[index] = min;
		index++;
		min++;
	}
	return (max - min_copy);
}
