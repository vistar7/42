/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:56:23 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/27 23:56:30 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min < max)
	{
		arr = malloc((max - min) * sizeof(int));
		if (arr == NULL)
			return (-1);
	}
	else
	{
		range = NULL;
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}
/*
int main()
{
	int i = 0;
	int min = 0;
	int max = 9;
	int *arr;
	arr = &i;
	int res = ft_ultimate_range(&arr, min, max);
	i = 0;
	while (i < (max-min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}*/
