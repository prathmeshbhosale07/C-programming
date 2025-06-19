#include <stdio.h>
int main()
{
    float pl, sp, cp;
    printf("Enter a cost price:");
    scanf("%f", &cp);
    printf("Enter a selling price:");
    scanf("%f", &sp);

    if (sp > cp)
    {
        printf("profit:%f", sp - cp);
    }
    else if (cp > sp)
    {
        printf("loss:%f", cp - sp);
    }
    else
     printf("No Profit No Loss.\n");

    return 0;
}