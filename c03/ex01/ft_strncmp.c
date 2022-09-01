/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:38:02 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/28 15:16:51 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	int	i;
	int n;

	n = 3;
	if (argc > 1)
	{
		i = ft_strncmp (argv[1], argv[2], n);
		printf("%d\n", i);
		printf("%d\n", strncmp(argv[1], argv[2], 3));
	}
}*/
