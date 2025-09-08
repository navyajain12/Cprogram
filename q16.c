// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main()
{
    int i1,i2,i3,lar;
    printf("Input three numbers\n");
    scanf("%d%d%d",&i1,&i2,&i3);
    if(i1>i2)
       lar=i1;
    else
       lar=i2;
    if(i3>lar)
       lar=i3;
    printf("%d is the largest number",lar);
    return 0;
}