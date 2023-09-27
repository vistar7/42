/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:22:05 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/25 23:22:29 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	a;
	char	str[11];
	int		i;

	str[10] = '\0';
	i = 0;
	a = nb;
	if (a < 0)
	{
		a = -a;
		write(1, "-", 1);
	}
	if (a == 0)
		write(1, "0", 1);
	else
	{
		while (a > 0)
		{
			str[i++] = (a % 10) + '0';
			a /= 10;
		}
		while (i--)
			write(1, &str[i], 1);
	}
}
/*
void	ft_putnbr(int number)
{
	if (number == -2147483648)
		write(1, "-2147483648", 10);
	else if (number < 0)
	{
		number = -number;
		write(1, "-", 1);
	}
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}*/
/*
void	ft_putnbr(int nb)
{
	char	str[11];
	int		i;

	str[10] = '\0';
	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (nb > 0)
		{
			str[i++] = (nb % 10) + '0';
			nb /= 10;
		}
		while (i--)
			write(1, &str[i], 1);
	}
}*/

/*
int	main(void)
{
	int	n;

	n = 449;
	ft_putnbr(n);
	return (0);
}
*/
