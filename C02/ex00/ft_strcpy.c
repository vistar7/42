/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:57:05 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/14 21:57:24 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
int	main(void)
{
    char source[] = "Hello, World!";
    char destination[14]; // Make sure the destination buffer is large enough

    ft_strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}*/
