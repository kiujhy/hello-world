#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_ft(int *nbr)
{
	*nbr = 20;
}


int main(void)
{
 
    int c;
    
    
    c = 5;
    ft_ft(&c);
    printf("%d", c);
    return(0);
    
}
