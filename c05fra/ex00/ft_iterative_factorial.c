/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:45:34 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/24 19:53:58 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	k;

	k = 1;
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
	while (nb > 1)
	{
		k = nb * k;
		nb--;
	}
	return (k);
	}
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
	int nb = 8;
	int k;
	k = ft_iterative_factorial(nb);
	printf("%i", k);
}*/
