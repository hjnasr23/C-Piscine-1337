/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:32:06 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/17 17:11:52 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_non_printable_to_hex(unsigned char non_printable)
{
	char	*hexa_nbrs;

	hexa_nbrs = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa_nbrs[non_printable / 16], 1);
	write(1, &hexa_nbrs[non_printable % 16], 1);
}

void	ft_putstr_non_printable(char	*str)
{	
	while (*str != '\0')
	{
		if (*str > 126 || *str < 32)
			print_non_printable_to_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
