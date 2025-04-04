#include <stdio.h>

int main() {
    int N, M;
    
    // Read the dimensions of the matrix
    scanf("%d %d", &N, &M);
    
    // Declare a 2D array of size N x M
    int arr[N][M];
    
    // Read the elements of the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Print the last row
    for (int j = 0; j < M; j++) {
        printf("%d ", arr[N-1][j]);
    }
    printf("\n");
    
    // Print the last column
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i][M-1]);
    }
    printf("\n");
    
    return 0;
}
