#include<stdio.h>
int main ()
{
    int i,sum=0,n;
    printf("Enter anumber:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    sum +=i;
    printf("sum of 1 to  %d = %d",n,sum);
    return 0;


}
