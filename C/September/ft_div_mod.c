#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int a;
    int b;
    int c;
    int d;
   
    
    a=55;
    b=4;
    c=1;
    d = 1;
  
    ft_div_mod(a, b, &c, &d);
    printf("%d", a);
    printf(" ");
    printf("%d", b);
    printf(" ");
    printf("%d", c);
    printf(" ");
    printf("%d", d);
    return(0);
}
