/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:17:55 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/24 16:47:27 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
					str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[]= "salut, comment tu vas ? 42mots qua:rante-deux; c|inqu;ante+et+un";

	ft_strcapitalize(str);
	write(1, ft_strcapitalize(str), 61);
	return (0);
}