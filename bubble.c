#include <stdio.h>
int main()
{
    int i, n, j, a[100], flag;
    printf("How many number you wants enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
    }
    i++;
    printf("\n");
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);

    return 0;
}