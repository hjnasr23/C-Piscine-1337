/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:06:11 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 14:28:12 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mult(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

int	ft_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
