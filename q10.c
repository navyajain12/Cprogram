//Write a program to input time in seconds and convert it into hours and minutes
#include <stdio.h>

//start of main
int main()
{
    int s,h,m;

    //get input for time in sec
    printf("Input time in seconds: ",s);
    scanf("%d",&s);

    //convert to hours and mins
    h = s/60;
    m=s%60;

    //print time
    printf("\nTime in Hours and Minutes: %d hours and %d minutes",h,m);

    return 0;
}
//end of main