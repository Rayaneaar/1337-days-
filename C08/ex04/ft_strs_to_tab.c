/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:21:23 by raaribou          #+#    #+#             */
/*   Updated: 2026/08/03 22:54:57 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	dest = malloc((str_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_free_tab(t_stock_str *tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*strs;

	index = 0;
	strs = malloc((ac + 1) * sizeof(t_stock_str));
	if (!strs)
		return (NULL);
	while (index < ac)
	{
		strs[index].size = ft_strlen(av[index]);
		strs[index].str = av[index];
		strs[index].copy = ft_strdup(av[index]);
		if (!(strs[index].copy))
		{
			ft_free_tab(strs, index);
			return (NULL);
		}
		index++;
	}
	strs[index].str = NULL;
	return (strs);
}
