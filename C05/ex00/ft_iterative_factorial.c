/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:21:06 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/26 23:21:26 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}*/
/*int main()
{
	int i = ft_iterative_factorial(5);
	printf("%d",i);
}*/
