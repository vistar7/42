/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:24:28 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/18 22:49:42 by tgresle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_h.h"

int		first_check(char *nbr, int *i, int *j, t_dict *begin_list)
{
	int		k;
	int		nb;
	char	nbr2[4];

	k = 0;
	while (nbr[*i] == '0')
		(*i)++;
	if (*j % 3 != 0)
	{
		while (*j % 3 != 0 || *j == 0)
		{
			nbr2[k++] = nbr[(*i)++];
			(*j)--;
		}
		nbr2[k] = '\0';
		send_to_print((nb = ft_atoi(nbr2)), begin_list, *i, nbr);
		if (*j == 0)
		{
			ft_putchar('\n');
			return (0);
		}
		if (*j >= 3)
			print_suff(*i, nbr, *j / 3, begin_list);
	}
	return (1);
}

void make_three(int i, int j, char *nbr, t_dict *begin_list)
{
    int nb;
    char nbr2[4];

    while (j > 0)
    {
        int k = 0;
        while (k < 3 && i < check_length(nbr))
        {
            nbr2[k] = nbr[i];
            i++;
            k++;
        }
        nbr2[k] = '\0';
        nb = ft_atoi(nbr2);
        if (nb != 0)
        {
            if (k == 2)
            {
                // Handle two-digit numbers using the new function
                print_two_digits(nb, begin_list, i, nbr);
            }
            else
            {
                // For other numbers (including three-digit), use send_to_print
                send_to_print(nb, begin_list, i, nbr);
            }

            if (j >= 3)
                print_suff(i, nbr, j / 3, begin_list);
        }
        j -= k;
    }
}
/*
void	make_three(int i, int j, char *nbr, t_dict *begin_list)
{
	int		nb;
	int		k;
	char	nbr2[4];

	while (j > 0)
	{
		k = 0;
		while (k != 3)
		{
			nbr2[k] = nbr[i];
			i++;
			j--;
			k++;
		}
		nbr2[k] = '\0';
		nb = ft_atoi(nbr2);
		if (nb != 0)
		{
			send_to_print(nb, begin_list, i, nbr);
			if (j >= 3)
				print_suff(i, nbr, j / 3, begin_list);
		}
	}
}*/

void check_numbers(int nb, t_dict *begin_list, int i, char *nbrc)
{
    if (nb >= 1000)
    {
        send_to_print(nb / 1000, begin_list, i, nbrc);
        ft_putstr(" thousand");
        if (nb % 1000 != 0)
            ft_putchar(',');
        if (nb % 1000 < 100)
            ft_putchar(' ');
    }
    if (nb % 1000 >= 100)
    {
        send_to_print(nb % 1000, begin_list, i, nbrc);
        ft_putstr(" thousand");
        if (nb % 1000 % 100 != 0)
            ft_putchar(',');
        if (nb % 1000 % 100 < 10)
            ft_putchar(' ');
    }
    if (nb % 1000 % 100 >= 20)
    {
        send_to_print(nb % 1000 % 100, begin_list, i, nbrc);
        if (nb % 10 != 0)
            ft_putchar('-');
    }
    else if (nb % 1000 % 100 >= 10)
    {
        send_to_print(nb % 1000 % 100, begin_list, i, nbrc);
    }
}


/*
int		check_number(char *nbr, t_dict *begin_list)
{
	int		i;
	int		j;
	//int		k;
	//int		nb;

	i = 0;
	//nb = 0;
	//k = 0;
	j = check_length(nbr);
	if (j > 3 && check_suff((j - 1) / 3, begin_list) == 0)
		return (0);
	if (ft_atoi(nbr) == 0)
	{
		ft_putstr("zero");
		ft_putchar('\n');
		return (0);
	}
	if (first_check(nbr, &i, &j, begin_list) == 0)
		return (0);
	make_three(i, j, nbr, begin_list);
	ft_putchar('\n');
	return (0);
}*/
