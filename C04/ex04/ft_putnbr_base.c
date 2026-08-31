/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 17:59:23 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/19 13:02:27 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	convert_to_base_x(long nbr, int len_base, char *base)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= len_base)
		convert_to_base_x(nbr / len_base, len_base, base);
	write(1, &base[nbr % len_base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*index;
	char	*copy;

	copy = base;
	if (ft_strlen(base) <= 1)
		return ;
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return ;
		index = base + 1;
		while (*index)
		{
			if (*base == *index)
				return ;
			index++;
		}
		base++;
	}
	convert_to_base_x(nbr, ft_strlen(copy), copy);
}
