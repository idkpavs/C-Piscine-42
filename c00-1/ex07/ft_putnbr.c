/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:10:37 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/16 21:45:10 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		count_div(int d);

int		multiplier(int dig);

void	print(int nb);

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= 0)
	{
		print(nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		nb = nb * -1;
		write(1, "-", 1);
		print(nb);
	}
}

void	print(int nb)
{
	int	r;
	int	dig;
	int	multi;
	int	c;

	r = nb;
	dig = count_div(nb);
	multi = multiplier(dig);
	while (r >= 0)
	{
		c = 48 + (r / multi);
		write(1, &c, 1);
		r = nb % multi;
		multi = multi / 10;
	}
}

int	multiplier(int dig)
{
	int	p;
	int	i;

	p = 10;
	i = 2;
	while (i < dig)
	{
		p = p * 10;
		i++;
	}
	return ( p);
}

int	count_div(int d)
{
	int	i;

	i = 0;
	while (d != 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

int main()
{
	ft_putnbr(235000);
}
