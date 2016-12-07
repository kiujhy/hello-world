#include <unistd.h>

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

void    print_numbers(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (a != '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb(char a, char b, char 
					  c)
{
    a = '0';
    while (a <= '9')
    {
        b = a + 1;
        while (b <= '9')
        {
            c = b + 1;
            while (c <= '9')
            {
                print_numbers(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    char a;
    char b;
    char c;

    ft_print_comb(a, b, c);
}
