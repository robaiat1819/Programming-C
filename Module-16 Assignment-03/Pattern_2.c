#include <stdio.h>

void printPattern(int N) {
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= N - i; j++)
            printf(" ");
        
        
        int k = i;
        for (int j = 1; j <= i; j++) {
            printf("%d", k);
            k--;
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
