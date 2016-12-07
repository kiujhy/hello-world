#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc == 2 && atoi(argv[1]) > 0)
    {
        int a = atoi(argv[1]);
        string s = GetString();
        int n = strlen(s);
        if(s != NULL && n > 0)
        {
            for(int i = 0; i < n; i++)
            {
                if(isupper(s[i]))
                    s[i] = (s[i] - 64 + a) % 26 + 64;
                if(islower(s[i]))
                    s[i] = (s[i] -96 + a) % 26 + 96;
                printf("%c", s[i]);
            }
            printf("\n");
        }
        return(0);
    }
    else
        printf("Invalid key!");
        return(1);
}
