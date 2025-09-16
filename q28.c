// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main()
{
    int i,n,even=1;
    printf("Input a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        even*=i;
       printf("%d %d\n",i,even);
    }
    printf("product: %d\n",even);
    return 0;
}