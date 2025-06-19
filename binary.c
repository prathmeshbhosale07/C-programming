#include <stdio.h>
int main()
{
    int j;
    int a[100], i, mid, high, low, key, n, flag;
    printf("How many number you wants enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter a number for sorting:");
    scanf("%d", &key);
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
    flag = 0;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }
    if (flag)
        printf("found");

    else
        printf("Not found");

    return 0;
}
