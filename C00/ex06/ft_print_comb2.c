void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/* First digit of num1
// Second digit of num1
// Space separator
// First digit of num2
// Second digit of num2 */

void	print_combination(int num1, int num2)
{
	ft_putchar((char)(num1 / 10) + '0');
	ft_putchar((char)(num1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((char)(num2 / 10) + '0');
	ft_putchar((char)(num2 % 10) + '0');
	if (num1 != 98 || num2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print_combination(num1, num2);
			num2++;
		}
		num1++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
