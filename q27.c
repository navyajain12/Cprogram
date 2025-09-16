// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int i,n,odd=-1;
    printf("Input a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        odd+=2;
       printf("%d %d\n",i,odd);
    }
    printf("Sum: %d\n",odd);
    return 0;
}