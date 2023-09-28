/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:25:43 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/26 23:25:52 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n <= nb / 2)
	{
		if (nb == n * n)
			return (n);
		n++;
	}
	return (0);
}
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
	return (0);
}*/
/*
int main()
{
	int a = ft_sqrt(2147483647);
	printf("%d",a);
}*/
