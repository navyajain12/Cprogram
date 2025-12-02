//Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String without vowels: %s\n", str);
    return 0;
}
