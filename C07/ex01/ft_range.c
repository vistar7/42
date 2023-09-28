/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:55:55 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/27 23:56:08 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*new;
	int				i;
	unsigned int	int_lenght;

	int_lenght = (unsigned int)(max - min);
	i = 0;
	new = malloc(int_lenght * sizeof(int));
	if ((!new) || (min >= max))
	{
		return (NULL);
	}
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_range(0, 10)[8]);
	return (0);
}*/
/*
#include <stdlib.h>
#include <stdio.h>
// moulinette ko
int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min < max)
	{
		arr = malloc((max - min) * sizeof(int));
		if (arr == NULL)
			return (0);
	}
	else
		arr = NULL;
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}*/
/*int main()
{
	int *arr = ft_range(3, 7);
	int i = 0;
	while(i < 7 - 3)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}*/
