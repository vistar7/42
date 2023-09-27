/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:25:39 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/25 23:25:57 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = -1;
	while (base[++size])
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1)
			|| (base[size] >= 9 && base[size] <= 13))
			return ;
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, size);
	}
	else
		ft_print(nbr, base, size);
}
/*
int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	print_conv(int nbr, int nbase, char *base)
{
	int		i;
	char	ris[150];

	i = 0;
	if (nbr == 0)
		write(1, "0", 1);
	while (nbr > 0)
	{
		ris[i] = nbr % nbase;
		nbr /= nbase;
		i++;
	}
	while (--i >= 0)
	{
		ris[i] = base[(int) ris[i]];
		write(1, &ris[i], 1);
	}
}

int	controllo_base(char *base, int nbase)
{
	int	i;
	int	j;

	i = 0;
	while (i < nbase)
	{
		if (base[i] == '+' || base[i] == '-'
			|| !(base[i] >= 32 && base[i] <= 126))
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nbase;

	nbase = ft_strlen(base);
	if (!(nbase >= 2 && controllo_base(base, nbase)))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	print_conv(nbr, nbase, base);
}*/
/*
int	main()
{
	int	num = -11;
	char	base[] = "0123456789ABCDEF";
	
	ft_putnbr_base(num, base);
	
	return 0;
}
*/
