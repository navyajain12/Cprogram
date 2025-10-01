//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,sum=0;

    //input array size from user
    printf("Input array size\n");
    scanf("%d",&n);

    int ar[n];

    //enter numbers into array from user
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);


    printf("\nArray\n");

    //print array elements and calculate sum
    for(i=0;i<n;i++){
       printf("%d ",ar[i]);
       sum+=ar[i];
    }

    //print sum
    printf("\nSum of the Elements: %d",sum);

    return 0;
}
//end of main