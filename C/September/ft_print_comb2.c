#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
    
}


void ft_print_comb2(int q, int w)
{
	while(q>=0 && q<=98)
	{
        while(w>=0 && w<=99) 
        {
			if(q<w)
			{
               
                ft_putchar('0'+q/10);
				ft_putchar('0'+q%10);
				write(1, " ", 1);
				ft_putchar('0'+w/10);
				ft_putchar('0'+w%10);
				write(1, ", ", 2);
			}
			w++;
        }
		q++;
		w=0;
	}   
}
int main(void)
{
    int q;
    int w;
    char d;
    char c;
    char a;
    char b;
    
    q=0;
    w=0;
  
    ft_print_comb2(q, w);
}
