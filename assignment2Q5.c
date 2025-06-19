#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0)
        printf("number is divisiable");
    else
        printf("number is not divisiable");

    return 0;
}