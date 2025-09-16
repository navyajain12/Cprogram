//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Input two numbers and the function to be performed\n");
    scanf("%d%d%c",&a,&b,&op);
    switch(op)
    {
        case '+':
           printf("Addition: %d",a+b);
           break;
        case '-':
           printf("Subtraction: %d",a-b);
           break;
        case '*':
           printf("Multiplication: %d",a*b);
           break;
        case '/':
           printf("Division: %d",a/b);
           break;
        case '%':
           printf("Remainder: %d",a%b);
           break;
        default:
           printf("Invalid Input");
    }
    return 0;
}