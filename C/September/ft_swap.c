#include <stdio.h>
#include <unistd.h>


void ft_swap(int *a, int *b)
{
    int v;
    
    v = *a;
    *a = *b;
    *b = v;
}

int main(void)
{
    int a;
    int b;

    
    a = 55;
    b = 42;

    
    ft_swap(&a, &b);
    
    printf("%d", a);
    
    printf(", ");
    printf("%d", b);
    return(0);
}
