/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:46:45 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/14 09:02:34 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char		units;
	char		tens;
	char		hundreds;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds +1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &units, 1);
				if (hundreds != '7')
					write(1, &", ", 2);
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}
