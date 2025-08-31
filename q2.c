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