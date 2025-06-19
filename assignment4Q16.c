#include <stdio.h>
int main()
{
    int num;
    int evenSum;

    for (num = 100; num <= 150; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d even numbers\n", num);
            evenSum += num;
        }
        else
        {
            printf("%d odd numbers\n", num);
        }
    }

    printf("Sum of even numbers : %d", evenSum);

    return 0;
}