// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

//start of main
int main()
{
    int s1,s2,s3;
    int i,j;

    printf("Enter size of 1st array\n");
    scanf("%d",&s1);

    printf("Enter size of 2nd array\n");
    scanf("%d",&s2);

    s3=s1+s2;
    
    int a[s1],b[s2],m[s3];

    printf("Enter elements in 1st array\n");
    for(i=0;i<s1;i++)
        scanf("%d",&a[i]);

    printf("Enter elements in 2nd array\n");
    for(i=0;i<s2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<s1;i++)
       m[i]=a[i];

    for(j=0;j<s2;j++)
       m[s1+j]=b[j]; 

    for(i=0;i<s3;i++)
        printf("%d ",m[i]);

    return 0;
}