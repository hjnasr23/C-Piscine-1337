/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:55:34 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/15 11:28:55 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_number(int nb, int ten)
{
	int		div;

	while (ten > 0)
	{
		div = (nb / ten) + '0';
		write(1, &div, 1);
		nb %= ten;
		ten /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int		ten;

	ten = 1000000000;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, &"-", 1);
		nb = -nb;
	}
	while (ten > 1)
	{
		if (((nb / ten) != 0))
			break ;
		ten /= 10;
	}
	print_number(nb, ten);
}
