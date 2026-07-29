/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:18:01 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/29 16:26:37 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		total;
	int		sep_len;
	char	*dest;
	int		l;

	i = 0;
	k = 0;
	total = 0;
	if (size == 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += sep_len * (size - 1);
	dest = malloc(total + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		l = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			while (sep[l])
			{
				dest[k] = sep[l];
				l++;
				k++;
			}
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
