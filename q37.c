// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

//start of main
int main() 
{
    int num1, num2;

    // Read input values
    scanf("%d %d", &num1, &num2);

    // Calculate and print LCM
    printf("%d\n", lcm(num1, num2));

    return 0;
}
//end of main