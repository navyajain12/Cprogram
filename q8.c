/* Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,c=0;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //calculate sum till n natural numbers
    for(i=1;i<=n;i++){
        c=c+i;
    }

    //print sum
    printf("The sum of the first %d natural numbers: %d",n,c);

    return 0;
}
//end of main