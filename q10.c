//Write a program to input time in seconds and convert it into hours and minutes
#include <stdio.h>

int main()
{
    int s,h,m;
    printf("Input time in seconds: ",s);
    scanf("%d",&s);
    h = s/60;
    m=s%60;
    printf("\nTime in Hours and Minutes: %d hours and %d minutes",h,m);
    return 0;
}