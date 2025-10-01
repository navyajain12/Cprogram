/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

//start of main
int main()
{
    int i,j;

    //rows
    for(i=1;i<=5;i++)
    {
        //columns
        for(j=i;j<=5;j++)
            printf(" ");
        
        //star after spaces
        for(j=1;j<=2*i-1;j++)
          printf("*");
         
        //next line
        printf("\n");
    }

    //rows
    for(i=4;i>=1;i--)
    {
       //columns
       for(j=5;j>=i;j--)
          printf(" ");

       //star after spaces
       for(j=2*i-1;j>=1;j--)
          printf("*");

      //next line
      printf("\n");
    }

    return 0;
}
//end of main