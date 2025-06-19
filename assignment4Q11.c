#include <stdio.h>
int main()
{
    int num;

    for (num = 1; num <= 10; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d even numbers\n", num);
        }
        else
        {
            printf("%d odd numbers\n", num);
        }
    }

    return 0;
}