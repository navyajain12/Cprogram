// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

//start of main
int main()
{
    int n,dig,sum=0;

    //input a number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //digit extraction and sum
    while(n!=0)
    {
        dig = n%10;
        sum+=dig;
        n/=10;
    }

    //print sum
    printf("Sum of the digits is: %d",sum);
    return 0;
}