/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Your_Name <your_email@example.com>                         +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:00:00 by Your_Name         #+#    #+#             */
/*   Updated: 2023/09/06 00:00:00 by Your_Name        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
