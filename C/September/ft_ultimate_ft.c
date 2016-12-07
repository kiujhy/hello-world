#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_ft(int *********nbr)
{
	*********nbr = 20;
	printf("%d", *********nbr);
}


int main(void)
{
    int num;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr9;
    
    num = 5;
    nbr1 = &num;
    (nbr2) = &nbr1;
    (nbr3) = &(nbr2);
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;
    
    
    
    ft_ft(nbr9);
    
    
    
    return(0);
    
}
