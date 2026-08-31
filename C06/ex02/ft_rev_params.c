/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:43:22 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 14:14:30 by nhajji           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	char	**index;

	index = argv;
	while (argv < index + argc)
	{
		if (*(argv + 1) == 0)
			break ;
		argv++;
	}
	while (index < argv)
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
		argv--;
	}
	return (0);
}
