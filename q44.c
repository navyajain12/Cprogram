// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

//start of main
int main() 
{
    int n, i;
    float sum = 1,num,deno;

    //input number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //calculate sum of the series
    for(i = 2; i <= n; i++) {
        num = 2 * i - 1;
        deno = 2 * i;
        sum += num / deno;
    }

    //print sum
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
//end of main