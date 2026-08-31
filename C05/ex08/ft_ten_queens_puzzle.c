/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 08:14:20 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/26 08:47:55 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_positions(int *table3)
{
	int		index;
	char	nbr;

	index = 0;
	while (index < 10)
	{
		nbr = table3[index] + '0';
		write(1, &nbr, 1);
		index++;
	}
	write(1, "\n", 1);
}

int	check_safety(int *table2, int column, int row)
{
	int	index;

	index = 0;
	while (column > index)
	{
		if (table2[index] == row
			|| (table2[index] - row) == (column - index)
			|| (row - table2[index]) == (column - index))
			return (0);
		index++;
	}
	return (1);
}

void	find_positions(int *table1, int column, int *counter)
{
	int	row;

	if (column == 10)
	{
		print_positions(table1);
		(*counter)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (check_safety(table1, column, row) == 1)
		{
			table1[column] = row;
			find_positions(table1, column + 1, counter);
		}
		row++;
	}	
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	count;

	count = 0;
	find_positions(tab, 0, &count);
	return (count);
}
