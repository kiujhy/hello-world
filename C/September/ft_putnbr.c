#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

 void ft_putnbr(int nb)
{
    if(nb<0)
    { 
        nb = nb * (-1);
        write(1, "-", 1);
    }
     if(nb>=10)
     {
         ft_putnbr(nb/10);
         ft_putnbr(nb%10);
     }
     else ft_putchar(nb+'0');
}
int main(void)
{
    int nb;
   
    
    nb = 988;
    ft_putnbr(nb);
    return(0);
}
