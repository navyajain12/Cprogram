// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n;

    //input number from user
    printf("Input a number\n");
    scanf("%d",&n);

    //calculate and print factors of a number
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           printf("%d ",i);
    }


    return 0;
}
//end of main