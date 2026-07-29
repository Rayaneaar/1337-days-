/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:28:35 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/25 15:04:18 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*tmp;
	int		index;
	int		j;

	i = 1;
	index = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			index = i + 1;
			while (index < argc)
			{
				if (ft_strcmp(argv[i], argv[index]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[index];
					argv[index] = tmp;
				}
				index++;
			}
			i++;
		}
		index = 1;
		while (index < argc)
		{
			j = 0;
			while (argv[index][j])
			{
				ft_putchar(argv[index][j]);
				j++;
			}
			index++;
			ft_putchar('\n');
		}
	}
}
