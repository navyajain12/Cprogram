//Q. Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;
    file = fopen("info.txt", "r");
    if(file == NULL) {
        printf("Error! Could not open info.txt\n");
        return 1;
    }
    while((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(file);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
