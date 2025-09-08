//Write a program to input a number and check if it is positive negative or zero using nested if else
#include <stdio.h> 
int main()
{
    int i;
    printf("Input a number\n");
    scanf("%d",&i);
    if(i>0)
      printf("%d is a positive integer",i);
    else if(i<0)
      printf("%d is a negative integer",i);
    else
      printf("%d is zero",i);
    return 0;
}