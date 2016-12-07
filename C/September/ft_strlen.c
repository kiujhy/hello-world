#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i=0;
    
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main(void)
{
    int b;
    char str[]= "Hello,World!!!";
    b = ft_strlen(str);
    printf("%d", b);
    return(0);
}
