/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:45:16 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/14 20:59:29 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_table(char *table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		table[i] = i + '0';
		i++;
	}
}

void	print_tablele(char *table, int n)
{
	write(1, table, n);
	if (table[0] != '9' - n + 1)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	table[9];
	int		i;
	int		j;

	if (n <= 0 || n >= 10)
		return ;
	init_table(table, n);
	while (1)
	{
		print_tablele(table, n);
		i = n - 1;
		while (i >= 0 && table[i] == '9' - (n - 1 - i))
			i--;
		if (i < 0)
			break ;
		table[i]++;
		j = i + 1;
		while (j < n)
		{
			table[j] = table[j - 1] + 1;
			j++;
		}
	}
}
