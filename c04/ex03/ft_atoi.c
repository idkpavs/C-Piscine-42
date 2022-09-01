/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:58:03 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/29 14:48:52 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	final_num;

	i = 0;
	minus = 1;
	final_num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_num = final_num * 10 + str[i] - 48;
		i++;
	}
	final_num = final_num * minus;
	return (final_num);
}

int main(void)
{
	char *atoi = " 	 ---+--+1234-ab567";
	printf("%d", ft_atoi(atoi));
}
