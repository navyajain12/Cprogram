// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

//start of main
int main()
{
    int n,num,dig,rev=0;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    num=n;
    //digit extraction
    while (num!=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num/=10;
    }

    //print reversed digit
    printf("Reversed Digit: %d",rev);
    
    return 0;
}
//end of main