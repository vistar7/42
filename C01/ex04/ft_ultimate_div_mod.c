/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:37:11 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/14 17:37:24 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
    int x = 10;
    int y = 3;

    printf("Before division: x = %d, y = %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("After division: x = %d, y = %d\n", x, y);

    return (0);
}*/
