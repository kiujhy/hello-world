#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int b = 0;
    if(argc == 2)
    {
        int k = strlen(argv[1]);
        int buk = 0;
        while(buk < k)
        {
            char o = argv[1][b];
            if((o >= 'a' && o <= 'z') || (o >= 'A' && o <='Z' ))
                buk++;
            else
            {
                printf("Invalid key!");
                return(1);
            }
            b++;
        }
        
        if(k == buk)
        {
            string s = GetString();
            int c = strlen(s);
            for(int i = 0, j = 0; i < c; i++)
            {
                if(isupper(s[i]) && isupper(argv[1][j]))
                {
                    s[i] = (s[i] - 65 + argv[1][j] - 65) % 26 + 65;
                    j = (j + 1) % k;
                }
                else if(islower(s[i]) && islower(argv[1][j]))
                {
                    s[i] = (s[i] - 97 + argv[1][j] - 97) % 26 + 97;
                    j = (j + 1) % k;
                }
                else if(isupper(s[i]) && islower(argv[1][j]))
                {
                    s[i] = (s[i] - 65 + argv[1][j] - 97) % 26 + 65;
                    j = (j + 1) % k;
                }
                else if(islower(s[i]) && isupper(argv[1][j]))
                {
                    s[i] = (s[i] - 97 + argv[1][j] - 65) % 26 + 97;
                    j = (j + 1) % k;
                }
                printf("%c", s[i]);
            }
            printf("\n");
            return(0);
        }
        else
        {
            printf("Invalid key!");
            return(1);
        }
    }
    else
    {
        printf("Invalid key!");
        return(1);
    }
}
