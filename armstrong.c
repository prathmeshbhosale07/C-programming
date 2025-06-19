#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    while(n>0)
    {
        cnt++;
        n=n/10;
    };

    printf("count of digit %d",cnt);
    return 0;
}