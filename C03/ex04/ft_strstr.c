/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:58:35 by sferrare          #+#    #+#             */
/*   Updated: 2023/09/25 17:58:53 by sferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (*(to_find + j) == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s1 = str;
		s2 = to_find;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (str);
		str++;
	}
	return (NULL);
}*/
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "phaey palrte";
	char	to_find[] = "pal";
	char	*p = ft_strstr(str, to_find);
	
	//printf("%s\n", (ft_strstr(str, to_find)));
	if (p != NULL)
		printf("%s\n", p);
	else
		printf("Substring not found\n");
	return (0);
}*/

// return (str + i); // uguale a &str[i]
