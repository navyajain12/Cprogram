// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,odd=-1;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //calculate sum and print n odd numbers
    for(i=1;i<=n;i++){
        odd+=2;
       printf("%d %d\n",i,odd);
    }

    //print sum
    printf("Sum: %d\n",odd);

    return 0;
}
//end of main