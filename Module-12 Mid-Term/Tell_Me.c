#include <stdio.h>

int f(int A[], int N, int X) {
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N; 
        scanf("%d", &N);

        int A[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int X; 
        scanf("%d", &X);

        if (f(A, N, X)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
