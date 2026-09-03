/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:27:00 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 20:41:15 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	check_order(char *argument1, char *argument2)
{
	while (*argument1 == *argument2 && *argument1 != '\0')
	{
		argument1++;
		argument2++;
	}
	if ((unsigned char)*argument1 > (unsigned char)*argument2)
		return (-1);
	return (0);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		end;
	char	*tmp;

	if (!tab || !tab[0])
		return ;
	end = 0;
	while (end == 0)
	{
		end = 1;
		i = 0;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				end = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

#include <stdio.h>

int main(void)
{

	char *tab[] = {"hello","how","can","apple",0};

	char **ptr;
	ft_advanced_sort_string_tab(tab,&check_order);

	ptr = tab;
	while (*ptr)
	{
		printf("%s",*ptr);
		ptr++;
	}
}
