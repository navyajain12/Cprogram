// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

//start of main
int main()
{
    double pri,rate,time;
    double sim_int,comp_int;

    //get input for Principal Value, Rate of Interest,Time
    printf("Input Principal Value, Rate of Interest,Time");
    scanf("%lf,%lf,%lf",&pri,&rate,&time);

    //calculate simple interest
    sim_int = (pri * rate * time) / 100;

    //calculate compound interest
    comp_int = pri * (pow((1 + rate / 100), time)) - pri;

    //print both
    printf("Simple Interest=%.2lf\n Compound Interest=%.2lf\n", sim_int, comp_int);

    return 0;
}
//end of main