/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:27:50 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/26 23:27:58 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	n;
	int	c;

	n = 1;
	c = 0;
	if (nb <= 1)
		return (2);
	while (n < nb / n)
	{
		if (nb % n == 0)
			c++;
		n++;
	}
	if (c > 1)
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
/*#include <stdio.h>
int     main(void)
{
        int nb = -100;
        nb = ft_find_next_prime(nb);
        printf("%i", nb);
}*/
/*
int	ft_sqrt(int nb)
{
	long long	min;
	long long	max;
	long long	mid;
	long long	buffer;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	min = 1;
	max = nb;
	mid = (min + max) / 2;
	while (min <= max)
	{
		mid = (min + max) / 2;
		buffer = mid * mid;
		if (buffer == nb)
			return ((int)mid);
		else if (buffer > nb)
			max = mid - 1;
		else if (buffer < nb)
			min = mid + 1;
	}
	return ((int)min);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (0);
	else if (nb < 0)
		return (0);
	while (i <= ft_sqrt(nb))
	{
		if ((nb % i) == 0)
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
}*/
// nuova ex07 entrambe valide
/*#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < (nb / 2))
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
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}*/
/*int main()
{
	int i = ft_find_next_prime(109);
	printf("%d",i);
}*/
