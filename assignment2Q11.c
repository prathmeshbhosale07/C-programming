#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two number:");
    scanf("%d %d",&a,&b);

    if(a==b)
    printf("%d is equal to %d\n",a,b);

    else if (a>b)
    printf("%d is gretter than %d\n",a,b);

    else
    printf("%d is less than %d\n",a,b);


    return 0;
   
    


}