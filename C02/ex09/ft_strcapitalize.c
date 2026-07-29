/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:39:54 by raaribou          #+#    #+#             */
/*   Updated: 2026/07/19 18:03:56 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

char	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int	is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c <= '9'
			&& c >= '0'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	should_be_uppercase;

	i = 0;
	should_be_uppercase = 1;
	while (str[i])
	{
		if (!is_alpha_numeric(str[i]))
			should_be_uppercase = 1;
		else if (should_be_uppercase)
		{
			str[i] = ft_uppercase(str[i]);
			should_be_uppercase = 0;
		}
		else
			str[i] = ft_lowercase(str[i]);
		i++;
	}
	return (str);
}
