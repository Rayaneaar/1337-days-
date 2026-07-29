/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 22:01:36 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/19 23:51:46 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexi_decimal;
	int		i;

	i = 0;
	hexi_decimal = "0123456789abcdef";
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_putchar(hexi_decimal[str[i] / 16]);
			ft_putchar(hexi_decimal[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
