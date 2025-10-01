/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

//start of main
int main()
{
    int i,j;

    //check rows
    for(i=1;i<=3;i++)
    {
      //check columns
      for(j=1;j<=2*i-1;j++)
          printf("*\n");

      //next line 
      printf("\n");
    }

    //check rows
    for(i=2;i>=1;i--)
    {
      //check columns
      for(j=2*i-1;j>=1;j--)
          printf("*\n");

      //next line
      printf("\n");
    }

    return 0;
}
//end of main