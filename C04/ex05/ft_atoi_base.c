/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 08:15:53 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/19 13:03:50 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*copy;

	copy = str;
	while (*str)
		str++;
	return (str - copy);
}

int	index_within_base(char *base, char ch)
{
	int	index;

	index = 0;
	while (*base)
	{
		if (*base == ch)
			return (index);
		base++;
		index++;
	}
	return (-1);
}

int	convert_to_decim(char	*base, char	*str)
{
	int	base_len;
	int	result;

	base_len = ft_strlen(base);
	result = 0;
	while (*str && index_within_base(base,*str) != -1)
	{
		result = (result * base_len) + index_within_base(base,*str);
		str++;
	}
	return (result);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int			index;

	if (!base_is_correct(base))
		return (0);
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	index = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			index++;
		str++;
	}
	if (index % 2 != 0)
		return (-convert_to_decim(base, str));
	return (convert_to_decim(base, str));
}
