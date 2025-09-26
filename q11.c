//Write a program to check if it is even or odd using if else.
#include <stdio.h>

//start of main
int main()
{
    int i;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&i);

    //check for even or odd
    if(i%2==0){
       printf("%d is an even number",i);
    }else
       printf("%d is an odd number",i);

    return 0;
}
//end of main