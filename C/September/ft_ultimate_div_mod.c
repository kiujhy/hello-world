#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int v;
    v = *a/(*b);
    *b = *a%(*b);
    *a = v;

    
    
    
}
int main(void)
{
	int a;
	int b;

	a = 23;
	b = 3;
        
	ft_ultimate_div_mod(&a, &b);
	printf("%d, ", a);
	printf(" ");
	printf("%d", b);
}
