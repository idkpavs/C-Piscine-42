/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 08:11:23 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/20 23:19:18 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	letra;

	i = 0;
	while (*(str + i) != '\0')
	{
		letra = *(str + i);
		write(1, &letra, 1);
		i++;
	}
}
/*
int main()
{
	char array[3];
//	char *frase = "hola wur ysflgho fsfldgdk s";

	array[0] = 's';
	array[1] = 'i';
	array[2] = '\0';

	ft_putstr(array);
//	ft_putstr(frase);
} */
