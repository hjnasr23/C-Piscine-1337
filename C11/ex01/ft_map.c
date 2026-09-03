/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 09:07:55 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 10:29:14 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*table;
	int	index;

	if (length <= 0)
		return (NULL);
	table = malloc(sizeof(int) * length);
	if (!table)
		return (NULL);
	index = 0;
	while (index < length)
	{
		table[index] = f(tab[index]);
		index++;
	}
	return (table);
}

//int	ft_factorial(int nb)
//{
//	if (nb < 0)
//		return (0);
//	if (nb == 0 || nb == 1)
//		return (1);
//	return (nb * ft_factorial(nb - 1));
//}

//void	ft_putnbr(int n)
//{
//	char	c;

//	if (n > 9)
//		ft_putnbr(n / 10);
//	c = (n % 10) + '0';
//	write(1, &c, 1);
//}

//int	main(void)
//{
//	int	tab[5] = {1, 2, 3, 4, 5};
//	int	*res;
//	int	i;

//	res = ft_map(tab, 5, &ft_factorial);
//	if (!res)
//		return (1);
//	i = 0;
//	while (i < 5)
//	{
//		ft_putnbr(res[i]);
//		write(1, " ", 1);
//		i++;
//	}
//	write(1, "\n", 1);
//	free(res);
//	return (0);
//}