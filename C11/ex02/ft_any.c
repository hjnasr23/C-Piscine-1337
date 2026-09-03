/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_any.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:30:21 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 10:59:30 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

//#include <unistd.h>

//int	has_a(char *str)
//{
//	while (*str)
//	{
//		if (*str == 'a')
//			return (1);
//		str++;
//	}
//	return (0);
//}

//int	main(void)
//{
//	char	*tab1[] = {"hello", "world", "cat", NULL};
//	char	*tab2[] = {"hello", "world", "test", NULL};

//	if (ft_any(tab1, &has_a))
//		write(1, "tab1: 1\n", 8);
//	else
//		write(1, "tab1: 0\n", 8);

//	if (ft_any(tab2, &has_a))
//		write(1, "tab2: 1\n", 8);
//	else
//		write(1, "tab2: 0\n", 8);
//	return (0);
//}