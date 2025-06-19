#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter a three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if((n2< n1 && n1 <n3) || (n3<n1 && n1<n2)){
        printf("%d is between %d and %d",n1,n2,n3);
    }
    else {
        printf("%d is not between %d and %d",n1,n2,n3)
    }
    return 0;
}