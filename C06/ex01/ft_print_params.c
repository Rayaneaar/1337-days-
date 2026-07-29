/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:27:48 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/25 15:05:20 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	args_num;

	args_num = 1;
	if (argc > 1)
	{
		while (args_num < argc)
		{
			i = 0;
			while (argv[args_num][i])
			{
				ft_putchar(argv[args_num][i]);
				i++;
			}
			args_num++;
			ft_putchar('\n');
		}
	}
	return (0);
}
