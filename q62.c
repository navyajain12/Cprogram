// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n;

    //input array size from user
    printf("Input array size\n");
    scanf("%d",&n);

    int ar[n];

    //enter numbers into array from user
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);


    printf("\nArray\n");

    //print array elements
    for(i=0;i<n;i++){
       printf("%d ",ar[i]);
    }

    int rev[n];
    int j;
    i=n-1;
    //reverse array
    for(j=0;j<n;j++)
    {
            rev[j]=ar[i];
            i--;
    }

    //print reversed array elements
    printf("\nReversed Array\n");
    for(i=0;i<n;i++){
       printf("%d ",rev[i]);
    } 

    return 0;
}
//end of main