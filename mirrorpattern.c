#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter a row no:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        printf(" ");
        printf("#");

        for(j=1;j<i;j++)
       printf("*");

        printf("\n");
    }
}