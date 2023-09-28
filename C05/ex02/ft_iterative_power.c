/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:22:14 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/26 23:23:04 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 0;
	result = 1;
	while (i++ < power)
		result *= nb;
	return (result);
}
/*
int main()
{
	int i = ft_iterative_power(11111,2);
	printf("%d\n",i);
}*/
