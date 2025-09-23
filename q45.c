#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0,num,deno;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = 2 * i;
        deno = 4 * (i - 1) + 3;
        sum += num / deno;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
