// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

//start of main
int main()     
{
    int i,n,c,high=0,low;

    //get input for array size
    printf("Input array size\n");
    scanf("%d",&n);     

    int ar[n];
    //get elements into the array
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);       

    //print the elements of array
    printf("\nArray\n");
    for(i=0;i<n;i++)
       printf("%d ",ar[i]);       

    //check for max and min element
    high=low=ar[0];
    for(i=0;i<n;i++){
        c=ar[i];
          if(c>high)              
            high=c;
          if(c<low)
            low=c;
    }

    //print max and min element
    printf("\nHighest Element: %d\nLowest Element: %d",high,low);
    return 0;
}
//end of main