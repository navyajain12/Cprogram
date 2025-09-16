// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main()
{
    int bin,dig,comp=0,place=1;
    printf("Input a binary number\n");
    scanf("%d",&bin);
    while(bin!=0)
    {
        dig = bin%10;
        if (dig == 0)
            comp += 1 * place;
        else if (dig == 1)
            comp += 0 * place;

        place *= 10;
        bin/=10;
    }
    printf("Complement of binary is: %d",comp);
    return 0;
}