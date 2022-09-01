/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:41:03 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/20 23:12:22 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
	int num;
	int num2;
	int y;
	int x;
	int c;
	int *div;
	int *mod;

	num = 2;
	num2 = 10;
	div = &y;
	mod = &x;
	

	ft_div_mod(num, num2, div, mod);
	c = 48 + *div;
	write(1, &c, 1);
	c = 48 + *mod;
	write(1, &c, 1);
} */
