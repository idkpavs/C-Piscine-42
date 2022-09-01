/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:29:35 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/16 21:12:52 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	ft_putchar(int c)
{
	int	num;

	num = 48 + (c / 10);
	write(1, &num, 1);
	num = 48 + (c % 10);
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar(first);
			if (first <= 98)
			{
				write(1, " ", 1);
			}
			ft_putchar(second);
			if (first < 98)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}

int main()
{
	ft_print_comb2();
}
