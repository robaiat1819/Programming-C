#include <stdio.h>

void printPattern(int N) {
    int s = 1, k = N;
    for (int i = 1; i <= 2 * N - 1; i++) {
        
        for (int j = 1; j <= k - 1; j++)
            printf(" ");
        
        
        for (int j = 1; j <= s; j++) {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }
        
        
        if (i < N) {
            s += 2;
            k--;
        } else {
            s -= 2;
            k++;
        }
        
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    printPattern(N);
    
    return 0;
}
