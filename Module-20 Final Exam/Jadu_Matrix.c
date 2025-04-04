#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Check if the matrix is a square matrix
    if (n != m) {
        printf("NO\n");
        return 0;
    }

    int matrix[n][m];
    // Read the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 0;

    // Check the elements of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || (i + j) == (n - 1)) {
                // Check elements on the primary or secondary diagonal
                if (matrix[i][j] != 1) {
                    flag = 1;
                    break;
                }
            } else {
                // Check elements not on the diagonals
                if (matrix[i][j] != 0) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1) {
            break;
        }
    }

    // Print the result based on the flag
    if (flag == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
