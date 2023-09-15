/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:41:57 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/14 18:42:32 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/*
int	main(void)
{
    char *message = "Hello, world!";
    int length = ft_strlen(message);
    printf("Length of the string: %d\n", length);
    return 0;
}*/
