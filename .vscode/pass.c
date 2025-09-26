#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    int sum = 0, highest, lowest;

    // Input marks
    for (int i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];

        if (i == 0) {
            highest = lowest = marks[i]; // initialize first value
        } else {
            if (marks[i] > highest)
                highest = marks[i];
            if (marks[i] < lowest)
                lowest = marks[i];
        }
    }

    float avg = (float)sum / n;
    printf("\\nAverage = %.2f\\n", avg);
    printf("Highest = %d\\n", highest);
    printf("Lowest = %d\\n", lowest);

    return 0;
}
