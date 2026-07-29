/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:14:36 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/23 12:00:10 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j] && base[j] != base[i])
			j++;
		if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_recursive(long nbr, char *base, unsigned int base_len)
{
	if (nbr >= base_len)
		ft_recursive((nbr / base_len), base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long			n;
	unsigned int	base_len;

	n = nbr;
	base_len = ft_strlen(base);
	if (base_len < 2 || !ft_base_check(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ft_recursive(n, base, base_len);
}
