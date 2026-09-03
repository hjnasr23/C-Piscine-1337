/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:35:40 by nhajji            #+#    #+#             */
/*   Updated: 2026/09/03 15:14:04 by nhajji           ###   ########.fr       */
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

void	ft_sort_string_tab(char **tab)
{
	char	*swp;
	char	**index;
	char	**index1;

	if (tab == 0 || *tab == 0)
		return ;
	index = tab;
	while (*index)
	{
		index1 = (index + 1);
		while (*index1)
		{
			if (check_order(*index, *index1) == -1)
			{
				swp = *index;
				*index = *index1;
				*index1 = swp;
			}
			index1++;
		}
		index++;
	}
}
