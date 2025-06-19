#include <stdio.h>
int main()
{
    int i, n, j, a[100];
    printf("How many number you wants enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted arry \n");

    for (i = 0; i < n; i++)
    printf("%d\n",a[i]);

    return 0;
}