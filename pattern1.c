#include <stdio.h>

int main()
{
    int i, n, j;
    char ch = 'A';
    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%C %c", ch, ch + 32);
            ch++;
        }
        printf("\n");
    }

    return 0;
}