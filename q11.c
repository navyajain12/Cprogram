//Write a program to check if it is even or odd using if else.
#include <stdio.h>

int main()
{
    int i;
    printf("Input a number\n");
    scanf("%d",&i);
    if(i%2==0){
       printf("%d is an even number",i);
    }else
       printf("%d is an odd number",i);
    return 0;
}