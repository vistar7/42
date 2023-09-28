/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:56:44 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/27 23:56:50 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	c = sizeof(sep) * (size - 1);
	s = malloc(sizeof(strs) + c);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < (size - 2))
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int main()
{
    char *strs[] = {"Hello", "world", "!", "welcome", "to", "42!"};
    char *sep = "pippo";
    int size = 7;

    char *result = ft_strjoin(size, strs, sep);

    if (result != NULL) 
    {
        printf("%s\n", result);
        free(result);
    } else 
    {
        printf("\n");
    }

    return 0;
}*/
