#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Enter a row no:");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
           
       printf("*");

        printf("#\n");
        }

        printf("\n");
    }
}
