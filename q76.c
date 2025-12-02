//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, m;    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) {
        printf("Not Symmetric\n");
        return 0;
    }
    int isSym = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSym = 0;
                break;
            }
        }
        if (!isSym) break;
    }
    if (isSym)
        printf("The given matrix is symmetric\n");
    else
        printf("The given matrix is not symmetric\n");

    return 0;
}
