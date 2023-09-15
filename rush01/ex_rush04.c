#include <unistd.h>

void	rush(int x, int y)
{
	int	n;
	int	m;
	
	n = x-2;
	m = y-2;
	if (x <= 0 || y <= 0)
		write(1, "Serve un valore maggiore di 0\n", 30); 
	if (x == 1)
		write(1, "A\n", 2);
	if (x == 2)
		write(1, "AC\n", 3);
	
	if (x > 2)
	{
		write(1, "A", 1);
		while (n>0)
		{
		n--;
		write(1, "B", 1);
		}	
		write(1, "C\n", 2);	
	}
	while (y > 2 && m > 0)
	{
		if (x > 1)
		{
			write(1, "B", 1);
			n = x-2;
			while (n>0)
			{
				n--;
				write(1, " ", 1);
			}	
			write(1, "B\n", 2);
			m--;
		}
	}
	if (y != 1)
	{
		if (x == 1)
			write(1, "C\n", 2);
		if (x == 2)
			write(1, "CA\n", 3);
		
		if (x > 2)
		{
			write(1, "C", 1);
			n = x-2;
			while (n>0)
			{
				n--;
				write(1, "B", 1);
			}		
			write(1, "A\n", 2);	
		}
	}
	
}

int	main(void)
{
	rush(211,333);
	return (0);
}
