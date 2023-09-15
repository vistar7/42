/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:39:34 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/14 19:39:46 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	swapped;
	int	i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    ft_sort_int_tab(arr, size);

    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}*/
