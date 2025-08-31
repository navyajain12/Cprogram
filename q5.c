/* Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
F = (°C × 9/5) + 32
*/
#include <stdio.h>

int main()
{
    double F,C;
    printf("Input temperature in Celcius\n");
    scanf("%lf",&C);
    F = (C*1.8)+32;
    printf("The temperature in Farenheit: %lf",F);
    return 0;
}