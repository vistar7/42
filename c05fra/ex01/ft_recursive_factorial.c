/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrisost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:18:07 by fgrisost          #+#    #+#             */
/*   Updated: 2023/09/21 19:24:03 by fgrisost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return 1;
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return 0;
}
/*#include <stdio.h>
int main(void)
{
	int nb = 5;
	nb = ft_iterative_factorial(nb);
	printf("%d", nb);
}*/
