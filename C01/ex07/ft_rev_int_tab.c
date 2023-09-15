/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:09:27 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/14 19:09:36 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
/*
int	main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    ft_rev_int_tab(arr, size);

    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}*/
