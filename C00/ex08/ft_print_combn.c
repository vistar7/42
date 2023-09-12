/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:09:11 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/12 20:09:25 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int *numbers, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(numbers[i] + '0');
		i++;
	}
}

int	increment_numbers(int *numbers, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (numbers[i] != 9 - (n - 1 - i))
		{
			numbers[i]++;
			i++;
			while (i < n)
			{
				numbers[i] = numbers[i - 1] + 1;
				i++;
			}
			return (1);
		}
		i--;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	numbers[9];
	int	first;
	int	j;

	if (n < 1 || n > 9) 
		return ;
	j = 0;
	first = 1;
	while (j < 9)
	{
		numbers[j] = 0;
		j++;
	}
	while (numbers[0] <= 9 - n)
	{
		if (!first)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		first = 0;
		print_numbers(numbers, n);
		if (!increment_numbers(numbers, n))
		{
			break ;
		}
	}
	ft_putchar('\n');
}

/*int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
	return (0);
}*/
