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
int main()
{
    int i,n,f=1;
    printf("Input a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
       printf("%d %d\n",i,f);
    }
    printf("Factorial: %d\n",f);
    return 0;
}