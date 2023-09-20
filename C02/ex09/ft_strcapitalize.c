/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:15 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/20 18:06:35 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	alphanum(char c)
{
	return ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') || 
		(c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	cap = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (alphanum(str[i]))
		{
			if (cap == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (cap == 2 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			cap = 2;
		}
		else
			cap = 1;
		i++;
	}
	return (str);
}
