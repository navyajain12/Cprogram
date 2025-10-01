// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,f=1;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //calculate factorial
    for(i=1;i<=n;i++){
        f*=i;
       printf("%d %d\n",i,f);
    }

    //print factorial
    printf("Factorial: %d\n",f);

    return 0;
}
//end of main