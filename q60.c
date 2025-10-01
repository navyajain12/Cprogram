// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

//start of main
int main()
{
    int i,n,pos=0,neg=0,zero=0;

    //input array size from user
    printf("Input array size\n");
    scanf("%d",&n);

    int ar[n];

    //enter numbers into array from user
    printf("Enter numbers into the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);


    printf("\nArray\n");

    //print array elements and count positive, negative and zero elements
    for(i=0;i<n;i++){
       printf("%d ",ar[i]);
       if(ar[i]>0)
          ++pos;
       else if(ar[i]<0)
          ++neg;
       else if(ar[i]==0)
          ++zero;
    }

    //print no. of +ve, -ve and zero
    printf("\nPositive: %d\nNegative: %d\nZero: %d\n",pos,neg,zero);

    return 0;
}
//end of main