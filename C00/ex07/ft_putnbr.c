/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:59:05 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/12 17:59:32 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divisor;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	divisor = 1;
	while (nb / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		ft_putchar((nb / divisor) % 10 + '0');
		divisor /= 10;
	}
}
