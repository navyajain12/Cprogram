/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

//start of main
int main()
{
   int i,j,c=1;

   //check rows
   for(i=5;i>=1;i--)
    {
        //check columns
        for(j=1;j<=i;j++)
        {
            //print spaces
            printf(" ");
        }
        //print numbers
        for(j=i;j<=5;j++)
            printf("%d",j);

        //next line
        printf("\n");
    }

    return 0;
}
//end of main