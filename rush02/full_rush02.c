#include "ft_h.h"

int		check_suff(int j, t_dict *begin_list)
{
	while (begin_list->next != 0
		&& (begin_list->suf == 0 || j != begin_list->nb))
		begin_list = begin_list->next;
	if (begin_list->next == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int		check_nb(int nb, t_dict *begin_list)
{
	while (begin_list->next != 0
		&& (begin_list->suf == 1 || nb != begin_list->nb))
		begin_list = begin_list->next;
	if (begin_list->next == 0)
		return (0);
	return (1);
}

int		check_length(char *nbr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (nbr[j] == '0')
		j++;
	while (nbr[i + j])
	{
		i++;
	}
	return (i);
}

void	check_and(int nb, int i, char *nbr)
{
	int j;

	j = 0;
	if (nb != 0)
	{
		while (nbr[j] == '0' && j < i)
			j++;
		if ((i - j) > 2 && (nb % 100 != 0) && check_length(nbr) > 2
			&& (nb / 100 >= 1 || i == check_length(nbr)))
			ft_putstr("and ");
	}
}
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
int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_dict	*ft_create_elem(int n, int suf, char *literal)
{
	t_dict	*created;

	created = NULL;
	created = malloc(sizeof(t_dict));
	if (created == NULL)
		return (NULL);
	if (created)
	{
		created->nb = n;
		created->suf = suf;
		created->literal = malloc(sizeof(char) * (strlen(literal) + 1));
		if (created->literal == NULL)
			return (NULL);
		created->literal = literal;
		created->next = NULL;
	}
	return (created);
}
char	*addchar(char *str, char *buf)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	if ((new = malloc(sizeof(char) * (i + 2))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = buf[0];
	new[i + 1] = '\0';
	free(str);
	return (new);
}

int		gest_buf(int file, t_dict **begin)
{
	int		size;
	char	*str;
	char	buf[1];

	str = malloc(sizeof(char));
	str[0] = '\0';
	while ((size = read(file, buf, 1)) != 0)
		if (buf[0] != '\n')
		{
			if ((str = addchar(str, buf)) == NULL)
				return (0);
		}
		else
		{
			if (parse_dict(begin, str) == 1)
			{
				free(str);
				str = malloc(sizeof(char));
				str[0] = '\0';
			}
			else if (ft_strlen(str) != 0)
				return (0);
		}
	ft_list_sort(begin);
	return (1);
}

int		ft_file_read(char *filepath, t_dict **begin)
{
	int			file;

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		if (gest_buf(file, begin) == 0)
			return (-1);
		return (1);
	}
	else
		return (0);
}
void	ft_list_clear(t_dict **begin_with)
{
	t_dict	*ptr;
	t_dict	*liste;

	liste = *begin_with;
	if (liste)
		while (liste)
		{
			ptr = liste->next;
			free(liste->literal);
			free(liste);
			liste = ptr;
		}
}
int		ft_list_push_front(t_dict **liste, int n, int suf, char *lit)
{
	t_dict	*push;

	if (liste)
	{
		push = ft_create_elem(n, suf, lit);
		if (push == NULL)
			return (0);
		push->next = *liste;
		*liste = push;
	}
	else
	{
		if ((*liste = ft_create_elem(n, suf, lit)) == NULL)
			return (0);
	}
	return (1);
}
void	ft_list_swap(t_dict *liste)
{
	int		nb;
	int		suf;
	char	*literal;

	nb = liste->nb;
	suf = liste->suf;
	literal = liste->literal;
	liste->nb = liste->next->nb;
	liste->suf = liste->next->suf;
	liste->literal = liste->next->literal;
	liste->next->nb = nb;
	liste->next->suf = suf;
	liste->next->literal = literal;
}

void	ft_list_sort(t_dict **begin_list)
{
	t_dict	*a;
	t_dict	*b;

	a = *begin_list;
	while (a != NULL)
	{
		b = *begin_list;
		while (b->next != NULL)
		{
			if (b->nb < b->next->nb)
				ft_list_swap(b);
			b = b->next;
		}
		a = a->next;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * i);
	i = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
int		gest_argv(int argc, char **argv, char **nb, char **dictpath)
{
	if (argc == 2)
	{
		*dictpath = "dicts/numbers.dict";
		*nb = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*dictpath = argv[1];
		*nb = argv[2];
		return (1);
	}
	return (0);
}

int		test_nb(char *nb)
{
	int		i;

	i = -1;
	while (nb[++i])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	t_dict	*dict;
	char	*nb;
	char	*dictpath;

	if (gest_argv(argc, argv, &nb, &dictpath) == 0 || test_nb(nb) == 0)
		ft_putstr("Error\n");
	else
	{
		dict = 0;
		if (ft_file_read(dictpath, &dict) == 1)
			check_number(nb, dict);
		else
			ft_putstr("Dict Error\n");
	}
	ft_list_clear(&dict);
	return (0);
}
int		check_exists(t_dict *begin, int nb)
{
	while (begin)
	{
		if (begin->nb == nb)
			return (0);
		begin = begin->next;
	}
	return (1);
}

int		get_nb(int *nb, int *suf, char *str)
{
	int		i;
	int		j;

	i = 0;
	*nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i >= 4)
	{
		j = -1;
		if ((i - 1) % 3 != 0)
			return (0);
		while (++j < i)
			if ((j == 0 && str[j] != '1') || (j != 0 && str[j] != '0'))
				return (0);
		*nb = i / 3;
		*suf = 1;
	}
	else
		*suf = 0;
	return (1);
}

char	*ft_check_space(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] != ' ')
			j++;
		else if (str[i - 1] != ' ')
			j++;
	if ((str2 = malloc(sizeof(char) * (j + 1))) == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] != ' ' || str[i - 1] != ' ')
			str2[j++] = str[i];
	str2[j] = '\0';
	return (str2);
}

int		test_line(char *str, int *i)
{
	int		j;

	while (str[*i] >= '0' && str[*i] <= '9')
		(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	if (str[*i] != ':')
		return (0);
	(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	j = *i;
	while (str[++j])
		if (str[j] <= 31 || str[j] >= 127)
			return (0);
	return (1);
}

int		parse_dict(t_dict **begin, char *str)
{
	int		nb;
	int		i;
	int		suf;
	char	*str2;

	if (get_nb(&nb, &suf, str) == 0)
		return (0);
	if (nb != 0 || (nb = ft_atoi(str)) != -1)
	{
		if (suf == 0)
			if (check_exists(*begin, nb) == 0)
				return (0);
		i = 0;
		if (test_line(str, &i) == 0)
			return (0);
		if ((str2 = ft_strdup((str + i))) == NULL)
			return (0);
		if ((str2 = ft_check_space(str2)) == NULL)
			return (0);
		if (ft_list_push_front(begin, nb, suf, str2) == 0)
			return (0);
		return (1);
	}
	return (0);
}
void	print_nb(int nb, t_dict *begin_list)
{
	while (begin_list->suf == 1 || nb != begin_list->nb)
		begin_list = begin_list->next;
	ft_putstr(begin_list->literal);
	if (nb < 20 || nb > 99)
	{
		ft_putchar(' ');
	}
}

void	print_suff(int i, char *nbr, int j, t_dict *begin_list)
{
	while (begin_list->suf == 0 || j != begin_list->nb)
		begin_list = begin_list->next;
	ft_putstr(begin_list->literal);
	while (nbr[i] == '0')
		i++;
	if (nbr[i] != '\0' && i != (check_length(nbr) - 1)
		&& i != check_length(nbr) - 2)
		ft_putstr(", ");
	if (i == (check_length(nbr) - 1) || i == (check_length(nbr) - 2))
		ft_putchar(' ');
}

void	print_units(int nbr, char *nbrc, int i, t_dict *begin_list)
{
	int		nb;

	if ((nbr % 100) >= 20)
	{
		check_and(nbr, i, nbrc);
		print_nb((nb = (nbr % 100) - (nbr % 10)), begin_list);
		if (nbr % 10 != 0)
		{
			nb = nbr % 10;
			ft_putstr("-");
			print_nb(nb, begin_list);
		}
	}
	else if ((nbr % 100) < 20 && (nbr % 100 != 0))
	{
		print_nb((nb = nbr % 100), begin_list);
	}
}

void	print_hundreds(int nbr, char *nbrc, int i, t_dict *begin_list)
{
	int		nb;

	if ((nbr / 100) > 0)
	{
		nb = nbr / 100;
		print_nb(nb, begin_list);
		print_nb(100, begin_list);
	}
	if (check_nb(nbr % 100, begin_list) == 1)
	{
		check_and(nbr, i, nbrc);
		print_nb(nbr % 100, begin_list);
		if ((nbr % 100) >= 20)
			ft_putstr(" ");
	}
	else
	{
		print_units(nbr, nbrc, i, begin_list);
	}
}

void	send_to_print(int nbr, t_dict *begin_list, int i, char *nbrc)
{
	int nb;

	nb = nbr;
	if (check_nb(nb, begin_list) == 1)
	{
		if (nb == 100)
			ft_putstr("one ");
		check_and(nbr, i, nbrc);
		print_nb(nb, begin_list);
		if (nb >= 20 && nb <= 99)
			ft_putchar(' ');
	}
	else
	{
		print_hundreds(nbr, nbrc, i, begin_list);
	}
}
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
}

int		check_number(char *nbr, t_dict *begin_list)
{
	int		i;
	int		j;

	i = 0;
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
}



