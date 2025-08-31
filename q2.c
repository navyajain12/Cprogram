/* Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main()
{
    int a,b,sum,sub,prod,quo;
    printf("Input 2 numbers\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    sub = a-b;
    prod = a*b;
    quo = a%b;
    printf("Sum of the 2 numbers: %d",sum);
    printf("Difference of the 2 numbers: %d",sub);
    printf("Product of the 2 numbers: %d",prod);
    printf("Quotient of the 2 numbers: %d",quo);
    return 0;

}