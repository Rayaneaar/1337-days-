/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:14:46 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/28 14:47:53 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
