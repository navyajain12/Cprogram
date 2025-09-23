// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,num1,ldig,fdig,midpart,num=0,c=0,new=0;

    //Input a number
    printf("Input a number\n");
    scanf("%d",&n);

    //copy the number
    num=n;
    num1=n;

    //count number of digits
    while(n!=0)
    {
        ++c;
        n/=10;
    }
    printf("c: %d\n",c);

    //last digit
    ldig = num%10;
    printf("ldig: %d\n",ldig);

    i=pow(10,c-1);
    printf("i: %d\n",i);

    //first digit
    fdig = num/i;
    printf("fdig: %d\n",fdig);

    //middle part
    midpart=num1 % i;
    midpart/=10;
    printf("mid: %d\n",midpart);

    //new number
    new=(ldig*i)+midpart*10+fdig;
    printf("Swapped number: %d",new);

    return 0;
}