#include <stdio.h>
int main()
{
    int a[100], n, key, flag = 1, i;
    printf("How many number you want's to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter a number for search:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Not found");
    else
        printf("Found");
}