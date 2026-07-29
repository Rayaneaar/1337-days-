/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:28:08 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/22 10:13:31 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n == 0)
		return (diff);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
		diff = s1[i] - s2[i];
	return (diff);
}
