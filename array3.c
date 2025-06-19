#include<stdio.h>
int main()
{
    int a[100],i,n,key,cnt=0;
     printf("How many number you want's to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

        printf("Enter number of occurance:");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(key==a[i])
            cnt++;
        }
        if(cnt==0)
        printf("Not found");
        else
        printf("Found is %d",cnt);

        return 0;
}