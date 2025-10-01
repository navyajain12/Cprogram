/* Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

//start of main 
int main()
{
    int i,j;

    //check rows
    for(i=1;i<=5;i++)
    {
        //check columns
        for(j=1;j<=i;j++)
        {
            //print number
            printf("%d",j);
        }
        //next line
        printf("\n");
    }
    return 0;
}
//end of main