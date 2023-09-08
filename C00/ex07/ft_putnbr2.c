void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	if (nb >= 10)
		ft_putnbr(nb / 10);

	digit = nb % 10 + '0';
	ft_putchar(digit);
}

int	main(void)
{
	int number = 42;
	ft_putnbr(number);
	write(1, "\n", 1); // Add a newline after printing the number
	return (0);
}
