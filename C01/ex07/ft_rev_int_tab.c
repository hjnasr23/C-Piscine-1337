/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 21:50:26 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/16 12:12:30 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		j--;
		i++;
	}
}
