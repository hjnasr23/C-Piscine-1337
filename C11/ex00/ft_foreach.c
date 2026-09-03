/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 08:50:32 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 15:50:41 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

//#include <unistd.h>

//void	ft_putnbr(int nb)
//{
//	long int	nbr;
//	char		mod;

//	nbr = nb;
//	if (nbr < 0)
//	{
//		write(1, "-", 1);
//		nbr = -nbr;
//	}
//	if (nbr >= 10)
//		ft_putnbr(nbr / 10);
//	mod = (nbr % 10) + '0';
//	write(1, &mod, 1);
//}

//int main(void)
//{
//	int tab[] = {1, 2, 3, 4, 5};

//	ft_foreach(tab, 5, &ft_putnbr);
//	write(1, "\n", 1);
//	return (0);
//}