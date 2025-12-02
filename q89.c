//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, c = 0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            c++;
        }
    }
    printf("Frequency of '%c' = %d\n", ch, c);

    return 0;
}
