// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>

//start of main
int main()
{
    int day;

    //input day number from user
    printf("Input day number from 1-7\n");
    scanf("%d",&day);

    //print day according to number 
    switch(day){
        case 1:
          printf("Monday");    //1=monday
          break;
        case 2:
          printf("Tuesday");   //2=tuesday
          break;
        case 3:
          printf("Wednesday"); //3=wednesday
          break;
        case 4:
          printf("Thursday");  //4=thursday 
          break;
        case 5:
          printf("Friday");    //5=friday
          break;
        case 6:
          printf("Saturday");  //6=saturday
          break;
        case 7:
          printf("Sunday");   //7=sunday
          break;
        default: 
          printf("Invalid Input");
          break;
    }

    return 0;
}
//end of main