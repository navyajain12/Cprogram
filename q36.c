// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int i,n,n1,cf=0,hcf=0;
    printf("Input two numbers\n");
    scanf("%d%d",&n,&n1);
    for(i=1;i<=n;i++)
    {
       if(n%i==0 && n1%i==0)
        cf=i;
       if(cf>hcf)
        hcf=cf;
    }
    printf("HCF: %d",hcf);
    return 0;
}
