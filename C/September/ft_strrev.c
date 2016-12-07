#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *str)
{
    int i;
    int j;
    char buf;
   
    i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    j=0;
    i--;
    while(j<i)
    {
        buf = str[j];
        str[j]=str[i];
        str[i]=buf;
        j++;
        i--;
    }
    return(str);
}

int main(void)
{
    int k;
    char *n;
    char str[]= "Hello, World!!!";
    
    n = ft_strrev(str);
    printf("%s", n);
    return(0);
}
