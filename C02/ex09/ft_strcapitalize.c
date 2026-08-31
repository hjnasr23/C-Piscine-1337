/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhajji <nhajji@students.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:12:07 by nhajji            #+#    #+#             */
/*   Updated: 2026/08/17 17:06:49 by nhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char letter)
{
	if (letter > 'z' || letter < 'a')
		return (0);
	return (1);
}

int	is_nbr(char letter)
{
	if (letter > '9' || letter < '0')
		return (0);
	return (1);
}

int	is_upr(char letter)
{
	if (letter > 'Z' || letter < 'A')
		return (0);
	return (1);
}

char	*word_capitalize(char	*word)
{
	if (is_low(*word))
		*word -= 32;
	word++;
	while (!((*word > 'z' || *word < 'a') && (*word > 'Z' || *word < 'A'))
		|| is_nbr(*word))
	{
		if (is_upr(*word))
			*word += 32;
		word++;
	}
	return (--word);
}

char	*ft_strcapitalize(char	*str)
{
	char	*copy;
	int		index;
	char	check;

	copy = str;
	index = 0;
	while (*str != '\0')
	{
		if (!is_low(*str) && !is_nbr(*str) && !is_upr(*str))
		{
			check = *(str + 1);
			if (!(is_low(check) || is_nbr(check) || is_upr(check)))
			{
				str++;
				continue ;
			}
			else
				str = word_capitalize(++str);
		}
		else if (index == 0)
			str = word_capitalize(str);
		index++;
		str++;
	}
	return (copy);
}
