#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int c;
    int m;
   
    
    i=0;
    c=0;
    m=1;
    while (str[i] == '\t' || str[i] == ' ')
		i++;
        
	if(str[i]== '-' && str[i+1]<='9' && str[i+1]>='0')
	{
		m=m*(-1);
		i++;
	}
    if(str[i]== '+')
        i++;
  
	while(str[i] != '\0' && str[i]>='0' && str[i]<='9')
	{    
		c = c*10 + (str[i]-'0');
		i++;
	}
    c= c*m;
   
   
    return(c);
}

int main(void)
{
    int b;
    char str[]="   +32580hhhh";
    
    b = ft_atoi(str);
    printf("%d", b);
    return(0);
}
