//Write a program to input a number and check if it is positive negative or zero using nested if else
#include <stdio.h>

//start of main
int main()
{
    int i;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&i);

    //check for +ve , -ve or zero integer
    if(i>0)
      printf("%d is a positive integer",i);
    else if(i<0)
      printf("%d is a negative integer",i);
    else
      printf("%d is zero",i);

    return 0;
}
//end of main