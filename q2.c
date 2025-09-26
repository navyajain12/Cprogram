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

//start of main
int main()
{
    int a,b,sum,sub,prod,quo;

    //user input for numbers
    printf("Input 2 numbers\n");
    scanf("%d%d",&a,&b);

    //calculate sum,product,difference,quotient
    sum = a+b;
    sub = a-b;
    prod = a*b;
    quo = a%b;

    //print all four
    printf("Sum of the 2 numbers: %d",sum);
    printf("Difference of the 2 numbers: %d",sub);
    printf("Product of the 2 numbers: %d",prod);
    printf("Quotient of the 2 numbers: %d",quo);

    return 0;
}
//end of main