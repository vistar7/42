/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:28:32 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/19 18:28:57 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			i = 0;
			break ;
		}
		str++;
	}
	return (i);
}
/*
int	main(void)
{
    int res;

    res = ft_str_is_numeric("12345");
    printf("%d\n", res); // Should print 1 (contains only digits)

    res = ft_str_is_numeric("abc123");
    printf("%d\n", res); // Should print 0 (contains non-digit characters)

    res = ft_str_is_numeric("");
    printf("%d\n", res); // Should print 1 (empty string)

    return (0);
}*/
