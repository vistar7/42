/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:57:49 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/27 23:57:55 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*int_to_base(int nbr, char *base, int sign);

int	isin(int tofind, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == tofind)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}

long	mypow(int x, int n)
{
	int		i;
	long	number;

	number = 1;
	i = 0;
	while (i < n)
	{
		i++;
		number *= x;
	}
	return (number);
}

int	base_to_int(char *str, char *base, int i, int base_lenght)
{
	int	index;
	int	controllo;
	int	potenza;
	int	result;

	index = i;
	potenza = 0;
	result = 0;
	controllo = isin(str[i], base);
	while (controllo != -1)
	{
		i++;
		controllo = isin(str[i], base);
	}
	i--;
	while (i >= index)
	{
		result += (isin(str[i], base) * mypow(base_lenght, potenza));
		i--;
		potenza++;
	}
	return (result);
}

int	ft_radix_check(char *base)
{
	int	carattere_controllato;
	int	indice;
	int	counter;

	counter = 0;
	indice = 0;
	while (base[indice])
	{
		carattere_controllato = base[indice];
		if ((carattere_controllato == '+') || (carattere_controllato == '-'))
			return (0);
		counter = indice + 1;
		while (base[counter])
		{
			if (carattere_controllato == base[counter])
				return (0);
			counter++;
		}
		indice++;
	}
	return (indice);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	sign;
	int	decimale;
	int	lunghezza_base;

	i = 0;
	sign = 0;
	lunghezza_base = ft_radix_check(base_from);
	if (lunghezza_base < 2)
		return (NULL);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (isin(nbr[i], base_from) == -1)
	{
		if (nbr[i] == '-')
			sign++;
		else if (!(nbr[i] == '+'))
			return (0);
		i++;
	}
	decimale = base_to_int(nbr, base_from, i, lunghezza_base);
	if ((sign % 2) == 1)
		sign = -1;
	return (int_to_base(decimale, base_to, sign));
}
