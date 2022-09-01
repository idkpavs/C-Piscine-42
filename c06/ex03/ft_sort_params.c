/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:08:20 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/30 15:28:53 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_swap(char **a, char **b);

void	ft_putstr(char *str);

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	max_argv;
	int	a;
	int	b;

	max_argv = argc - 1;
	a = 1;
	while (a < max_argv)
	{
		b = 1;
		while (b < max_argv)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
				ft_swap(&argv[b], &argv[b + 1]);
			b++;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
