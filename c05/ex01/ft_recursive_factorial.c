/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:55:23 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/31 19:29:17 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int main(void)
{
	printf("%d", ft_recursive_factorial(6));
} */
