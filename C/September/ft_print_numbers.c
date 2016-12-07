#include <stdio.h>
#include <unistd.h>


int main()
{
    int a;
    
    a='0';
    while(a<='9')
    {
        write(1, &a, 1);
        a++;
    }
    return(0);
}
