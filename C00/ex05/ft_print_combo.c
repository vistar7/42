/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:59:27 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/09 21:59:44 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(char digit1, char digit2, char digit3)
{
	ft_putchar(digit1);
	ft_putchar(digit2);
	ft_putchar(digit3);
	if (digit1 != '7' || digit2 != '8' || digit3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				print_combination(digit1, digit2, digit3);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	ft_putchar('\n');
}
