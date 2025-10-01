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

//start of main
int main()
{
    int n,dig,num,i,sum=0;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //copy number
    num=n;

    //check for strong number
    while(num!=0)
    {
        dig=num%10;
        for(i=1;i<=dig;i++)
            if(dig%i==0)
               sum+=i;
        num/=10;
    }

    //print strong num or not
    if(sum==n)
      printf("%d is a strong number ",n);
    else
      printf("%d is not a strong number ",n);

    return 0;
}
//end of main