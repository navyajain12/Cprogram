//Write a program to input a year and check wether it is a leap year ot not using conditional statements
#include <stdio.h>

//start of main
int main()
{
    int year;

    //input year from user
    printf("Input a year\n");
    scanf("%d",&year);

    //check for leap year
    if(year%4 == 0 && year%100 != 0)
       printf("%d is a leap year",year);
    else if(year%400 == 0)
       printf("%d is a leap year",year);
    else 
       printf("%d is not a leap year",year);

    return 0;
}
//end of main