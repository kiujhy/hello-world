#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string s = GetString();
    int i = 0;
    int n;
    n = strlen(s);
    if(s != NULL)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            printf("%c", s[i] - 32);
        if(s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", s[i]);
        i++;
        for(i = 1; i < n; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z' && s[i-1] == ' ')
                printf("%c", s[i] - 32);
            if(s[i] >= 'A' && s[i] <= 'Z' && s[i-1] == ' ')
                printf("%c", s[i]);
        }
    }
    printf("\n");
}
