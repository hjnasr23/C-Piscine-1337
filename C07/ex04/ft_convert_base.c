/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 12:01:01 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 20:45:33 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			base_is_correct(char *base);
long int	convert_to_decim(char *base, char *str);
void		convert_to_base_to(long int nbr, int len_base,
				char *base, char **str);

int	ft_strlen(char *str)
{
	char	*copy;

	copy = str;
	while (*str)
		str++;
	return (str - copy);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*string;
	char		*result;
	int			nbr_len;
	long int	nbr_in_decim;
	long int	temp;

	if (!base_is_correct(base_from) || !base_is_correct(base_to))
		return (NULL);
	nbr_in_decim = convert_to_decim(base_from, nbr);
	temp = nbr_in_decim;
	if (temp < 0)
		temp = -temp;
	nbr_len = (nbr_in_decim <= 0);
	while (temp > 0)
	{
		nbr_len++;
		temp = temp / ft_strlen(base_to);
	}
	string = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!string)
		return (NULL);
	result = string;
	convert_to_base_to(nbr_in_decim, ft_strlen(base_to), base_to, &string);
	return (result);
}
