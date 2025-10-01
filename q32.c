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

//start of main
int main()
{
    int num, original, reversed = 0;

    //input number from user
    printf("Input a number to check palindrome\n");
    scanf("%d", &num);

    //copy number
    original = num;

    //calculate reversed digit
    while(num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    //check palindrome
    if(original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
//end of main