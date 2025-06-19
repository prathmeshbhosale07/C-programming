#include<stdio.h>
int main(){
    char character;
    printf("enter a lower case character:");
    scanf("%c",&character);

    if('a'<= character && character<='z')
    {
        if(character=='a'|| character =='e' || character =='i' || character =='o' || character =='u' ){
            printf("entered character is vowel");
        }
        else{
            printf("enterd character is consonent");
        }
    }
    else{
        printf("not a lower case!");
    }
    return 0;
}