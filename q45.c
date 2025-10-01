#include <stdio.h>

//start of main
int main() 
{
    int n, i;
    float sum = 0.0,num,deno;

    //enter number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //calculate sum of series
    for(i = 1; i <= n; i++) {
        num = 2 * i;
        deno = 4 * (i - 1) + 3;
        sum += num / deno;
    }

    //print sum
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
//end of main