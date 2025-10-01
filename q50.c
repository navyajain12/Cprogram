/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

//start of main
int main()
{
    int i,j;

    //check rows
    for(i=0;i<5;i++)
    {
        //check columns
        for(j=0;j<=i;j++)
        {
            //print spaces
            printf(" ");
        }
        //print stars
        for(j=i;j<5;j++)
           printf("*");

        //next line   
        printf("\n");
    }

    return 0;
}
//end of main