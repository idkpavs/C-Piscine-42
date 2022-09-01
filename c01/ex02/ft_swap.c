/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 02:26:33 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/20 23:16:28 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int main(void)
{
	int x;
	int y;
	int c;
	int *a;
	int *b;

	x = 5;
	y = 6;
	a = &x;
	b = &y;
	ft_swap(a, b);
	c = 48 + *a;
	write(1, &c, 1);
	c = 48 + *b;
	write(1, &c, 1);
} */
