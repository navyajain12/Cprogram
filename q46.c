/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
***** */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

//start of main
int main()
{
    int i,j;

    //check rows
    for(i=0;i<=4;i++)
    {
        //check columns
        for(j=0;j<=4;j++)
        {
            //print star
            printf("*");
        }
        //next line
        printf("\n");
    }

    return 0;
}
//end of main