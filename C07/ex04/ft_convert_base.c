/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 08:25:15 by raaribou          #+#    #+#             */
/*   Updated: 2026/08/05 18:41:24 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

long	ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		ft_check_base(char *base);

int	ft_check(char *base_from, char *base_to)
{
	int	check_base_from;
	int	check_base_to;

	check_base_to = ft_check_base(base_to);
	check_base_from = ft_check_base(base_from);
	if (!check_base_to)
		return (0);
	if (!check_base_from)
		return (0);
	return (1);
}

int	ft_get_len(long nb, char *base_to)
{
	int	base_len;
	int	len;

	base_len = ft_strlen(base_to);
	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= base_len)
	{
		nb /= base_len;
		len++;
	}
	return (len);
}

void	ft_copy(long nbr, char *dest, char *base_to, int *i)
{
	int		base_len;
	long	nb;

	nb = nbr;
	base_len = ft_strlen(base_to);
	if (nb < 0)
	{
		dest[(*i)] = '-';
		nb = -nb;
		(*i)++;
	}
	if (nb >= base_len)
	{
		ft_copy((nb / base_len), dest, base_to, i);
	}
	dest[(*i)] = base_to[nb % base_len];
	(*i)++;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*dest;
	int		i;
	int		len;
	long	nb;

	if (ft_check(base_from, base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	i = 0;
	len = 0;
	len = ft_get_len(nb, base_to);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_copy(nb, dest, base_to, &i);
	dest[i] = '\0';
	return (dest);
}
