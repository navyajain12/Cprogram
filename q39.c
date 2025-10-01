// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

//start of main
int main()
{
    int n,dig,prod=1;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //digit extraction and prod of odd numbers
    while(n!=0)
    {
        dig = n%10;
        if(dig%2!=0)
          prod*=dig;
        n/=10;
    }

    //print product
    printf("Product of the odd digits is: %d",prod);

    return 0;
}
//end of main