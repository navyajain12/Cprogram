// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
    int n,dig,num,i,sum=0;

    printf("Input a number\n");
    scanf("%d",&n);

    num=n;

    while(num!=0)
    {
        dig=num%10;
        for(i=1;i<=dig;i++)
            if(dig%i==0)
               sum+=i;
        num/=10;
    }

    if(sum==n)
      printf("%d is a strong number ",n);
    else
      printf("%d is not a strong number ",n);

    return 0;
}