/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkatason <vkatason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:49:20 by jugomez-          #+#    #+#             */
/*   Updated: 2022/08/13 22:22:50 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int i, int j, int x, int y);

void	conditions(int i, int j, int x, int y)
{
	if (((i == 1 && j == 1) || (i == x && j == y)))
	{
		ft_putchar('/');
	}
	else if (((i == 1 && j == y) || (i == x && j == 1)))
	{
		ft_putchar(92);
	}
	else if (i == 1 || i == x)
	{
		ft_putchar('*');
	}
	else if ((i != 1 || i != x) && (j == 1 || j == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y);

void	rush(int x, int y)
{	
	int		i;
	int		j;

	if (x < 1 || y < 1)
	{
		write (1, "Negative number are not allowed in this application!", 53);
	}
	else
	{
		j = 1;
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				conditions(i, j, x, y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
