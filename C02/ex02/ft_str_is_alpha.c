/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:32:34 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/19 15:31:10 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	upper;
	int	lower;

	i = 0;
	while (str[i])
	{
		upper = ((str[i] >= 'A' && str[i] <= 'Z'));
		lower = ((str[i] >= 'a' && str[i] <= 'z'));
		if (!(lower || upper))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
