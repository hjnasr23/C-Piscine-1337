/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 18:10:37 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/26 08:46:16 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	index = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (index < power)
	{
		result *= nb;
		index++;
	}
	return (result);
}
