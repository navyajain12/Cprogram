//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,even=0,odd=0;

    //input array size from user
    printf("Input array size\n");
    scanf("%d",&n);

    int ar[n];

    //enter numbers into array from user
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);


    printf("\nArray\n");

    //print array elements and count even and odd numbers
    for(i=0;i<n;i++){
       printf("%d ",ar[i]);
       if(ar[i]%2==0)
          ++even;
       else
          ++odd;
    }

    //print no. of even and odd
    printf("\nNumber of Even Elements: %d\nNumber of Odd Elements: %d\n",even,odd);

    return 0;
}
//end of main