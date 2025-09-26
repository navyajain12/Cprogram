#include <stdio.h>
#include <math.h>

//start of main
int main() {
    double a, b, c;
    double disc, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    disc = b * b - 4 * a * c;

    // Case 1: Real and different roots
    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and different: %.0lf, %.0lf\n", root1, root2);
    }
    // Case 2: Real and same roots
    else if (disc == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0lf\n", root1);
    }
    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("Roots are complex\n");
    }

    return 0;
}
//end of main