/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 08:25:30 by raaribou          #+#    #+#             */
/*   Updated: 2026/08/05 19:22:45 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_index(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (c == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	base_len;
	int	j;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_sign(char *str, char *base, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	while (ft_get_index(str[*i], base) == -1)
	{
		if (str[*i] == '-' || str[*i] == '+')
		{
			if (str[*i] == '-')
				sign *= -1;
			(*i)++;
		}
		else
			return (0);
	}
	return (sign);
}

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	res;
	int		index;
	int		sign;
	int		base_len;

	i = 0;
	res = 0;
	if (!ft_check_base(base))
		return (0);
	sign = ft_get_sign(str, base, &i);
	base_len = ft_strlen(base);
	while (ft_get_index(str[i], base) != -1)
	{
		index = ft_get_index(str[i], base);
		res = res * base_len + index;
		i++;
	}
	return (sign * res);
}
