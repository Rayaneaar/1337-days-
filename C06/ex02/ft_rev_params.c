/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:28:11 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/25 15:03:13 by raaribou         ###   ########.fr       */
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
	int	index;

	index = argc - 1;
	if (argc > 1)
	{
		while (index >= 1)
		{
			i = 0;
			while (argv[index][i])
			{
				ft_putchar(argv[index][i]);
				i++;
			}
			index--;
			ft_putchar('\n');
		}
	}
}
