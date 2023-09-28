/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:14:53 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/24 20:18:27 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return 0;
	power = power - 1;
	nb = nb * ft_recursive_power(nb, power);
	return (nb);
}
/*#include <stdio.h>
int main (void)
{
	int nb = -2;
	int power = -5;
	nb = ft_recursive_power(nb, power);
	printf("%i", nb);
}*/
