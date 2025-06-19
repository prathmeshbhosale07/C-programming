#include<stdio.h>
#include<string.h>

int main()
{
    char n[100];

    printf("Enter a number:");
    scanf("%s",n);

    printf("Reverse number:%s",strrev(n));

    return 0;
}