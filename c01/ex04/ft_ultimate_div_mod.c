/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:45:03 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/20 23:18:04 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}
/*
int main()
{
	int i;
	int j;
	int *a;
	int *b;

	i = 2;
	j = 12;
	a = &i;
	b = &j;

	ft_ultimate_div_mod(a, b);
	printf("%i %i", i, j);
} */
