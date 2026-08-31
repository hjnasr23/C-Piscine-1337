/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:35:07 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 14:14:33 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	check_order(char *argument1, char *argument2)
{
	while (*argument1 == *argument2 && *argument1 != '\0')
	{
		argument1++;
		argument2++;
	}
	if (*argument1 > *argument2)
		return (-1);
	return (0);
}

void	sort_arguments(char **index1)
{
	char	**index2;
	char	*swp;

	while (*(index1 + 1))
	{
		index2 = index1 + 1;
		while (*index2)
		{
			if (check_order(*index1, *index2) == -1)
			{
				swp = *index1;
				*index1 = *index2;
				*index2 = swp;
			}
			index2++;
		}
		index1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	sort_arguments(argv + 1);
	while (*(argv + 1))
	{
		ft_putstr(*(argv + 1));
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
