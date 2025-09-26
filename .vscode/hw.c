#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "hello123";  // predefined password
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0) {
            printf("Access granted\\n");
            return 0; // exit program
        } else {
            printf("Wrong password! Try again.\\n");
        }
        attempts++;
    }

    printf("Access denied! Too many attempts.\\n");
    return 0;
} //end of main