/* Q6: Write a program to swap two numbers using a third variable.
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/
#include <stdio.h>

int main()
{
    int a=10,b=35;
    int c;
    printf("Original First Integer %d\n",a);
    printf("Original Second Integer %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("Swapped First Integer %d\n",a);
    printf("Swapped Second Integer %d",b);
    return 0;
}