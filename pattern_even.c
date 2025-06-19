#include <stdio.h>
int main()
{
    int i, n, j;
    int even = 2;
    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 1; j++, even += 2)
            printf("%d\t", even);

        printf("\n");
    }
    return 0;
}