/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:30:12 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/13 20:30:23 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void) 
{
    int x = 5;
    int y = 10;

    printf("Prima dello scambio: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);

    return 0;
}*/
