/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:23:52 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/29 18:21:49 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{	
			if (base[j] == base[i])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] <= 32 || base[i] == 127))
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_check(base);
	if (len != 0)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base((nbr % len) *-1, base);
		}
		if (nbr < 0 && nbr != -2147483648)
		{
			write(1, "-", 1);
			nbr = nbr * (-1);
		}
		if (nbr >= len && nbr != -2147483648)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
		else
		{
			write(1, &base[nbr], 1);
		}
	}
}

int main(void)
{
	ft_putnbr_base(2147483647, "0123456789");
}
