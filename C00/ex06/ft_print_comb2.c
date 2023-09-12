/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:57:24 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/12 17:58:19 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int num1, int num2)
{
	ft_putchar((num1 / 10) + '0');
	ft_putchar((num1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((num2 / 10) + '0');
	ft_putchar((num2 % 10) + '0');
	if (num1 != 98 || num2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_recursive(int num1, int num2)
{
	if (num1 <= 98)
	{
		if (num2 <= 99)
		{
			print_combination(num1, num2);
			ft_print_comb2_recursive(num1, num2 + 1);
		}
		else
		{
			ft_print_comb2_recursive(num1 + 1, num1 + 2);
		}
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb2_recursive(0, 1);
	ft_putchar('\n');
}
