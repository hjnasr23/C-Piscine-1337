/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:50:30 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/25 07:41:39 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(unsigned long long adr, char *base, int longeur)
{
	if (longeur > 1 || adr != 0)
		print_address(adr / 16, base, longeur - 1);
	write(1, &base[adr % 16], 1);
}

void	print_content_in_hex(void *addr, char *base, int longeur, int taille)
{
	int				index;
	int				i;
	unsigned char	*copy;

	index = 0;
	i = 0;
	copy = (unsigned char *)addr;
	while (index < longeur)
	{
		i++;
		if (index < taille)
		{
			write(1, &base[*copy / 16], 1);
			write(1, &base[*copy % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (index < longeur - 1 && i == 2)
		{
			write(1, " ", 1);
			i = 0;
		}
		copy++;
		index++;
	}
}

void	print_content(void *addr, int len)
{
	int				index;
	unsigned char	*helper;

	index = 0;
	helper = (unsigned char *)addr;
	while (index < len)
	{
		if (*helper > 126 || *helper < 32)
			write(1, ".", 1);
		else
			write(1, helper, 1);
		index++;
		helper++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char				*base;
	int					index;
	unsigned char		*copy;

	base = "0123456789abcdef";
	index = 16;
	copy = (unsigned char *)addr;
	while (size > 0)
	{
		if (size < 16)
			index = size;
		print_address((unsigned long long)copy, base, 16);
		write(1, ": ", 2);
		print_content_in_hex(copy, base, 16, index);
		write(1, " ", 1);
		print_content(copy, index);
		size -= index;
		copy += index;
	}
	return (addr);
}
