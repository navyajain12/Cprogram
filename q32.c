// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Input a number to check palindrome\n");
    scanf("%d", &num);
    original = num;
    while(num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if(original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}
