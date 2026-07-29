/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 09:15:11 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/26 10:02:03 by raaribou         ###   ########.fr       */
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
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	while (base[i])
	{
		j = i + 1;
		while (base[j] && base[j] != base[i])
			j++;
		if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		i++;
	}
	if (base_len >= 2)
	{
		return (1);
	}
	return (0);
}

int	ft_get_sign(char *str, char *base, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] <= 13 && str[*i] >= 9) || str[*i] == ' ')
		(*i)++;
	while ((ft_get_index(str[*i], base) == -1))
	{
		if (str[*i] == '-' || str[*i] == '+')
		{
			if (str[*i] == '-')
			{
				sign *= -1;
			}
			(*i)++;
		}
		else
			return (0);
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	base_len;
	int	index;

	i = 0;
	res = 0;
	sign = ft_get_sign(str, base, &i);
	base_len = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (sign == 0)
			return (0);
		while (ft_get_index(str[i], base) != -1)
		{
			index = ft_get_index(str[i], base);
			res = res * base_len + index;
			i++;
		}
		return (res * sign);
	}
	return (0);
}
