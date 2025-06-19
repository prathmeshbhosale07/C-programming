#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("positive number \n");
    }
    else
    {
        printf("negative number \n");
    }
    return 0;
}