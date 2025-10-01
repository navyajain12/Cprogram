// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,c=0;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //calculate factors of number
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           c++;
    }

    //check prime
    if(c==2)
      printf("%d is a prime number ",n);
    else
      printf("%d is not a prime number ",n);

    return 0;
}
//end of main