/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:59:38 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/19 12:44:54 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_nbr(char str)
{
	if (str > '9' || str < '0')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	index;
	int	result;

	result = 0;
	index = 0;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			index++;
		str++;
	}
	while (is_nbr(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	if (!(index % 2))
		return (result);
	else
		return (-result);
}
