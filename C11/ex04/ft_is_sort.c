/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:31:08 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 12:16:59 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;
	int	difference;

	if (length <= 1)
		return (1);
	index = 0;
	while (index < length - 1 && f(tab[index], tab[index + 1]) == 0)
		index++;
	if (index >= length - 1)
		return (1);
	difference = f(tab[index], tab[index + 1]);
	while (index < length - 1)
	{
		if (difference > 0 && f(tab[index], tab[index + 1]) < 0)
			return (0);
		else if (difference < 0 && f(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}

//#include <stdio.h>

//int	cmp(int a, int b)
//{
//	return (a - b);
//}

//int	main(void)
//{
//	int	t1[] = {1, 2, 3, 4, 5};

//	printf("%i\n",ft_is_sort(t1, 5, &cmp));
//	return (0);
//}