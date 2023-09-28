/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:43:00 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/24 20:52:07 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;
	int	c;

	if (nb <= 1)
		return (0);
	n = 1;
	c = 0;
	while (n <= nb / n)
	{
		if (nb % n == 0)
			c++;
		n++;
	}
	if (c > 1)
		return (0);
	if (c == 1)
		return (1);
	else
		return (69);
}
/*#include <stdio.h>
int	main(void)
{
	int nb = 10;
	nb = ft_is_prime(nb);
	printf("%i", nb);
}*/
