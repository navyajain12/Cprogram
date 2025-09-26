/* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

//start of main
int main()
{
    int l=4,b=5;
    double area,p;

    //calculate area and perimeter
    area = l*b;
    p = 2*(l+b);

    //print both
    printf("Area of the 2 numbers: %lf \n",area);
    printf("Perimeter of the 2 numbers: %lf",p);

    return 0;
}
//end of main