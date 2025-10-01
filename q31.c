// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

//start of main
int main()
{
    int n,bin=0,rem,p=1;

    //input number from user
    printf("Input a Number\n");
    scanf("%d",&n);

    //calculate binary equivalent
    while(n>0)
    {   
        rem=n%2;
        bin=bin+rem*p;
        p*=10;
        n/=2;
    }

    //print binary equivalent
    printf("Binary Equivalent: %d",bin);

    return 0;
}
//end of main