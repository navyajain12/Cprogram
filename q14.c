// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

//start of main
int main()
{
    char ch;

    //input character from user
    printf("Input a character\n");
    scanf("%c",&ch);

    //check for vowel or consonant
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
       printf("%c is a vowel",ch);
    else
       printf("%c is a consonant",ch);

    return 0;
}
//end of main