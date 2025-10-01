// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int i,n,num,even=0,odd=0;

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

    //enter number to search
    printf("\nEnter Number to Search\n");
    scanf("%d",&num);
    
    for(i=1;i<n;i++)
    {
        if(ar[i]==num)
          printf("\nFound Index at %d\n",i);
    }

    return 0;
}
//end of main