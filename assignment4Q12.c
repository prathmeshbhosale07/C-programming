#include <stdio.h>
int main()
{
    int num;

    for (num = 100; num <= 150; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d even numbers\n", num);
        }
         else
         {
             printf("%d  \n", num);
         }
    }

    return 0;
}