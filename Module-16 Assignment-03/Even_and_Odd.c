#include <stdio.h>

void odd_even() {
    int N, i;
    scanf("%d", &N);
    
    int A[N];
    
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int odd_cnt = 0, even_cnt = 0;
    for (i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            even_cnt++;
        } else {
            odd_cnt++;
        }
    }
    
    printf("%d %d\n", even_cnt,odd_cnt);
    
}

int main() {
    odd_even();
    return 0;
}
