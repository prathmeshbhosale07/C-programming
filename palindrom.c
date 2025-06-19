#include<stdio.h>
int main()
{
    int temp,n,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;//back up
    while(n>0)
    {
        int rem =n%10;
        rev = rev*10+rem;
        n=n/10;
    }

    if(rev==temp)
    printf("palindrom no");
    else
    printf("not palindrom number");

    return 0;

}