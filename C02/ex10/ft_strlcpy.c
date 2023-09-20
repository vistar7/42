/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:25:20 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/20 18:25:30 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	copied_chars;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (src_len < size - 1)
		copied_chars = src_len;
	else
		copied_chars = size - 1;
	return (copied_chars);
}
