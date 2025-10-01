// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

//start of main
int main()
{
    int n,i,j,c=0;

    //input number from user
    printf("Input a number n\n");
    scanf("%d",&n);

    printf("Prime numbers till %d\n",n);

    //numbers from 1 to n
    for(i=1;i<=n;i++)
    {   
        c=0;
        //check factors of i
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
              ++c;
        }

        //check and print prime
        if(c==2)
          printf("%d\n",i);

    }

    return 0;

}
//end of main