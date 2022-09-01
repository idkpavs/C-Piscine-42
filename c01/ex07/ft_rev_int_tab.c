/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:00:59 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/22 21:54:56 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main(void)
{
	int array[4] = {1, 3, 7, 9};
	int size;
	int count;

	size = 4;
	count = 0;
	ft_rev_int_tab(array, size);
	while (count < size)
	{
		printf ("%d", array[count]);
		count++;
	}
	return (0);
}*/