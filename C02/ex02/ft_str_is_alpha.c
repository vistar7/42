/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:04:13 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/15 21:04:26 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	printf("%d\n", ft_str_is_alpha("afggdDEGF  ."));
}*/
