/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:20:31 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 14:27:44 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	init(int (*f[])(int, int))
{
	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mult;
	f[3] = &ft_div;
	f[4] = &ft_mod;
}

int	get_op_index(char *op)
{
	char	*ops;
	int		i;

	if (!op || op[0] == '\0' || op[1] != '\0')
		return (-1);
	ops = "+-*/%";
	i = 0;
	while (ops[i])
	{
		if (ops[i] == op[0])
			return (i);
		i++;
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int	(*f[5])(int, int);
	int	index;

	if (argc != 4)
		return (0);
	init(f);
	index = get_op_index(argv[2]);
	if (index == -1)
	{
		ft_putstr("0\n");
		return (0);
	}
	if (index == 3 && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero\n");
	else if (index == 4 && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(f[index](ft_atoi(argv[1]), ft_atoi(argv[3])));
		ft_putstr("\n");
	}
	return (0);
}
