/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:23:25 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/31 19:30:12 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		result = ft_recursive_power(nb, power - 1) * result;
	}
	return (result);
}
/*
int main(void)
{
	printf("%d", ft_recursive_power(2, 2));
} */
