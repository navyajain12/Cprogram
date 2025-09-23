// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
    int i,n,sum=0;

    //input number
    printf("Input a number\n");
    scanf("%d",&n);

    //check perfect number
    for(i=1;i<n;i++)
       if(n%i==0)
          sum+=i;
    if(sum==n)
       printf("%d is a perfect number ",n);
    else
       printf("%d is not a perfect number ",n);
    return 0;
}