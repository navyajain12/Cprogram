// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int i,n;
    printf("Input array size\n");
    scanf("%d",&n);

    int ar[n];
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("\nArray\n");
    for(i=0;i<n;i++)
       printf("%d ",ar[i]);
    return 0;
}