#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int a = GetInt();
    while(a < 0 || a >23)
    {
        printf("Height: ");
        a = GetInt();
    }
    if(a > 0 && a <= 23)
    {
        int j;
        int i;
        i = a;
        j = a + 1;
        int k = 2;
        int m = 2;
        while(i > 0)
        {
            while(j > k)
            {
                printf(" ");
                j--;
            }
            while(j > 0)
            {
                printf("#");
                j--;
            }
            j = a + 1;
            m = m +1;
            k = m;
            i--;
            printf("\n");
        }
    }
   
}
