/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epavon-s <epavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:45:37 by epavon-s          #+#    #+#             */
/*   Updated: 2022/08/30 14:16:51 by epavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	max_argv;
	int	i;

	max_argv = argc - 1;
	if (argc > 1)
	{
		while (max_argv > 0)
		{
			i = 0;
			while (argv[max_argv][i] != '\0')
			{
				write(1, &argv[max_argv][i], 1);
				i++;
			}
			write(1, "\n", 1);
			max_argv--;
		}
	}
	return (0);
}
