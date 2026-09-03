/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:01:55 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 12:18:29 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	if (length <= 0)
		return (0);
	while (index < length)
	{
		if (f(tab[index]) != 0)
			count++;
		index++;
	}
	return (count);
}

//#include <stdio.h>

//int	is_long(char *str)
//{
//	int	len;

//	len = 0;
//	while (str[len])
//		len++;
//	if (len > 3)
//		return (1);
//	return (0);
//}

//int	main(void)
//{
//	char	*tab[] = {"hi", "hello", "1337", "c"};
//	int		res;

//	res = ft_count_if(tab, 4, &is_long);
//	printf("%i",res);
//	return (0);
//}