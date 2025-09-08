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

int main(){
    double pri,rate,time;
    double sim_int,comp_int;
    printf("Input Principal Value, Rate of Interest,Time");
    scanf("%lf,%lf,%lf",&pri,&rate,&time);
    sim_int = (pri * rate * time) / 100;
    comp_int = pri * (pow((1 + rate / 100), time)) - pri;
    printf("Simple Interest=%.2lf\n Compound Interest=%.2lf\n", sim_int, comp_int);
    return 0;
}