int ft_find_next_prime(int nb)
{
	int	n;
	int	c;

	n = 1;
	c = 0;
	if (nb <= 1)
		return (2);
	while (n < nb / n)
	{
		if (nb % n == 0)
			c++;
		n++;
	}
	if (c > 1)
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
/*#include <stdio.h>
int     main(void)
{
        int nb = -100;
        nb = ft_find_next_prime(nb);
        printf("%i", nb);
}*/

