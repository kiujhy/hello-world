#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float a = GetFloat();
    while(a < 0)
    {
        printf("How much change is owed?\n");
        a = GetFloat();
    }
   float b;
   b = round(a * 100);
   int c = (int) b;;
   c = b / 1;
   int counter = 0;
   while(b >= 25)
   {
        b = b - 25;
        counter++;
   }
   while(b >= 10)
   {
       b = b - 10;
       counter++;
   }
   while(b >= 5)
   {
       b = b - 5;
       counter++;
   }
   while(b >= 1)
   {
       b = b - 1;
       counter++;
   }
   printf("%d\n", counter);
}
