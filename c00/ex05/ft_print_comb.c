/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 21:16:58 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/16 10:50:32 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	if (i * 100 + j * 10 + k != 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
