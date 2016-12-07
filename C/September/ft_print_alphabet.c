#include <stdio.h>
#include <unistd.h>

int main()
    
{
    char c;
    char k;
    
    c=65;
    k=98;
    while(c <= 90 && k <= 122 )
    {
        write(1, &c, 1);
        c= c+2;
        write(1, &k, 1);
        k=k+2;
    }
    return(0);
}
