//Write a program to input a year and check wether it is a leap year ot not using conditional statements
int main()
{
    int year;
    printf("Input a year\n");
    scanf("%d",&year);
    if(year%4 == 0 && year%100 != 0)
       printf("%d is a leap year",year);
    else if(year%400 == 0)
       printf("%d is a leap year",year);
    else 
       printf("%d is not a leap year",year);
    return 0;
}