#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return;

    int i = 1;
    while (i <= y)
    {
        int j = 1;
        while (j <= x)
        {
            if ((i == 1 && j == 1) || (i == y && j == x))
                ft_putchar('A');
            else if ((i == 1 && j == x) || (i == y && j == 1))
                ft_putchar('C');
            else if (i == 1 || i == y || j == 1 || j == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    rush(0, -5);
    return (0);
}
