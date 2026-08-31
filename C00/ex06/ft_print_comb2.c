/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:47:47 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/15 11:22:25 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		right;
	int		left;
	int		number;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			number = (left / 10) + 48;
			write(1, &number, 1);
			number = (left % 10) + 48;
			write(1, &number, 1);
			write(1, &" ", 1);
			number = (right / 10) + 48;
			write(1, &number, 1);
			number = (right % 10) + 48;
			write(1, &number, 1);
			if (left != 98)
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}
