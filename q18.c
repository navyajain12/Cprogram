/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>

//start of main
int main()
{
    int p;

    //input percentage from user
    printf("Input percentage from 0-100\n");
    scanf("%d",&p);

    //check grade according to percentage
    if(p>=90 && p<=100)
      printf("Grade A");
    else if(p>=80 && p<=89)
      printf("Grade B");
    else if(p>=70 && p<=79)
      printf("Grade C");
    else if(p>=60 && p<=69)
      printf("Grade D");
    else if(p<60)
      printf("Grade F");

    return 0;
}
//end of main