/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:07:31 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/18 20:08:08 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int		ft_atoi(char *str)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (i == 0)
		return (-1);
	return (nb);
}
