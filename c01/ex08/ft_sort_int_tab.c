/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:02:22 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/20 23:22:42 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	len;
	int	firstp;
	int	secondp;
	int	temp;

	len = size - 1;
	firstp = 0;
	secondp = 1;
	while (firstp < len)
	{
		if (tab[secondp] < tab[firstp])
		{
			temp = tab[firstp];
			tab[firstp] = tab[secondp];
			tab[secondp] = temp;
			firstp = 0;
			secondp = 1;
		}
		else
		{
			firstp++;
			secondp++;
		}
	}
}
/*
int main(void)
{
	int string[3];
	int count;
	int c;

	string[0] = 9;
	string[1] = 2;
	string[2] = 5;
	count = 0;

	ft_sort_int_tab(string, 3);
	while (count < 3)
	{
		c = 48 + string[count];
		write(1, &c, 1);
		count++;
	}
} */
