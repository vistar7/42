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

void	print_numbers(int *numbers, int n)
{
	int		i;
	char	temp;

	i = 0;
	while (i < n)
	{
		temp = numbers[i] + '0';
		write(1, &temp, 1);
		i++;
	}
}

int	increment_numbers(int *numbers, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0)
	{
		if (numbers[i] != 10 - (n - i))
		{
			numbers[i]++;
			j = i + 1;
			while (j < n)
			{
				numbers[j] = numbers[i] + (j - i);
				j++;
			}
			return (1);
		}
		i--;
	}
	return (0);
}

void	generate_combinations(int n)
{
	int	numbers[9];
	int	first;
	int	j;

	first = 1;
	j = 0;
	while (j < n)
	{
		numbers[j] = j;
		j++;
	}
	while (1)
	{
		if (!first)
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		first = 0;
		print_numbers(numbers, n);
		if (!increment_numbers(numbers, n))
			break ;
	}
}

void	ft_print_combn(int n)
{
	if (n < 1 || n > 9)
		return ;
	generate_combinations(n);
}

/*int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
	return (0);
}*/
