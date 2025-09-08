// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
   double cp,sp,profit;
   double per;
   printf("Input Selling Price and Cost Price\n");
   scanf("%lf%lf",&sp,&cp);
   profit=sp-cp;
   per=(profit*100)/cp;
   if(per>0)
     printf("Profit percentage %.2lf",per);
    else{
     per*=-1;
     printf("Loss percentage %.2lf",per);
    }
    return 0;
}