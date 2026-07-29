/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:25:21 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/28 11:25:21 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * 4);
	i = min;
	j = 0;
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	return (arr);
}
