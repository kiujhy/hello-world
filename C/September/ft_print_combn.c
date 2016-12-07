#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n, int a, int b)
{
    while(n<98)
    {
        a=n/10;
        b=n%10;
        if(a<b)
        {
            ft_putchar(a+'0');
            ft_putchar(b+'0');
            write(1, " ", 1);
        }
        n++;
    }
}

int main(void)
{
    int n;
    int a;
    int b;
    
    n=1;
    ft_print_combn(n, a, b);
    return(0);
}
