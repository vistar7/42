/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:52:09 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/19 17:52:17 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*original_dest;

	original_dest = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}
/*
int	main(void)
{
	char	source[] = "Abbello, Ciaone!";
	char	destination[21];

	ft_strncpy(destination, source, 5);
	printf("Copied string: %s\n", destination);
	return (0);
}*/
