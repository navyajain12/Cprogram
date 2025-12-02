//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];  
    int c = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[c] != '\0' && str[c] != '\n') {
           c++;
    }
    printf("Number of characters in the string: %d\n", c);

    return 0;
}
