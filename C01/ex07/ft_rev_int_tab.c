/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 11:23:48 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/18 12:10:33 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	index;

	i = 0;
	index = size - 1;
	while (i < index)
	{
		tmp = tab[i];
		tab[i] = tab[index];
		tab[index] = tmp;
		i++;
		index--;
	}
}
