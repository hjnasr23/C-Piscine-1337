/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 13:36:37 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/23 20:45:51 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	base_is_correct(char *base)
{
	char	*index;

	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		if (*base == ' ' || (*base <= 13 && *base >= 9))
			return (0);
		index = base + 1;
		while (*index)
		{
			if (*base == *index)
				return (0);
			index++;
		}
		base++;
	}
	return (1);
}

long int	convert_to_decim(char *base, char *str)
{
	long int	result;
	int			index;
	int			base_len;
	int			signe;

	signe = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signe = -signe;
	base_len = ft_strlen(base);
	result = 0;
	while (*str)
	{
		index = 0;
		while (base[index] && base[index] != *str)
			index++;
		if (!base[index])
			break ;
		result = (result * base_len) + index;
		str++;
	}
	return (result * signe);
}

void	convert_to_base_to(long int nbr, int len_base, char *base, char **str)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		**str = '-';
		(*str)++;
	}
	if (nbr >= len_base)
		convert_to_base_to(nbr / len_base, len_base, base, str);
	**str = base[nbr % len_base];
	(*str)++;
	**str = '\0';
}
