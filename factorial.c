#include<stdio.h>

int main()
{
    int i,fact=1,n;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("Factorial is %d",fact);
    return 0;
}