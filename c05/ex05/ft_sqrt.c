/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:03:14 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/31 19:31:16 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	num;
	long	l_nb;

	l_nb = nb;
	if (l_nb <= 0)
		return (0);
	if (l_nb == 1)
		return (1);
	num = 2;
	while (num * num <= l_nb)
	{
		if (num * num == l_nb)
			return (num);
		num++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_sqrt(4));
	return (0);
} */
