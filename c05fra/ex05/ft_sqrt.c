/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:31:06 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/24 20:38:39 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n <= nb / 2)
	{
		if (nb == n * n)
			return (n);
		n++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int nb = -36;
	nb = ft_sqrt(nb);
	printf("%i", nb);
}*/
