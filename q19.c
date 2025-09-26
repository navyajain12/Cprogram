// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

//start of main
int main()
{
    int s1,s2,s3;

    //input 3 sides from user
    printf("Input three sides\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    //if all sides, equal=equilateral, 2 equal=isosceles, else scalene
    if(s1==s2==s3)
      printf("Equilateral");
    else if (s1==s2 || s2==s3 || s1==s3)
      printf("Isosceles");
    else
      printf("Scalene");

    return 0;
}
//end of main