/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:15:54 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/26 08:45:46 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb < 0)
		return (0);
	index = 1;
	result = 1;
	while (index <= nb)
	{
		result *= index;
		index++;
	}
	return (result);
}
