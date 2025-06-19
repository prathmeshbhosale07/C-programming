#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    num%2==0?printf("even number \n"):printf("odd number \n");
    // if (num % 2 == 0)
    // {
    //     printf("even number \n");
    // }
    // else
    // {
    //     printf("odd number \n");
    // }
     return 0;
}
