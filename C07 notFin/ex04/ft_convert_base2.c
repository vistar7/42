/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:57:13 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/27 23:57:39 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_radix_check(char *base);

int	ft_strlen(char *str)
{
	char	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = temp;
		i++;
	}
}

char	*formatres(char *str, int sign)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc((ft_strlen(str) + 1) * sizeof(char *));
	if (result == NULL)
		return (result);
	if (sign == -1)
	{
		result[0] = '-';
		i++;
	}
	ft_rev_int_tab(str, ft_strlen(str));
	while (*str)
	{
		result[i] = *str;
		i++;
		str++;
	}
	return (result);
}

char	*int_to_base(long nbr, char *base, int sign)
{
	int		i;
	int		lunghezza_base;
	char	*remainders;

	lunghezza_base = ft_radix_check(base);
	remainders = malloc(100);
	if ((remainders == NULL) || lunghezza_base < 2)
		return (NULL);
	i = 0;
	remainders[i] = base[nbr % lunghezza_base];
	nbr /= lunghezza_base;
	i++;
	while (nbr != 0)
	{
		remainders[i] = base[nbr % lunghezza_base];
		nbr /= lunghezza_base;
		i++;
	}
	return (formatres(remainders, sign));
}
