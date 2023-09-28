/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:28:29 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/21 19:36:16 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i = 2;
	int n = nb;
	if (power<0)
		return 0;
	
	if(nb == 0 && power == 0)
		return 1;
	if(power == 0)
		return 1;
	if (power == 1)
		return nb;
	while (i <= power)
	{
		n = n * nb;
		i++;
	}
	return n;
}
/*#include <stdio.h>
int main (void)
{
	int nb = 5;
	int power = 4;
	int n;
	n = ft_iterative_power(nb, power);
	printf("%d", n);
}*/
