#include <stdio.h>

int main() {
    // Read the input value N
    int N;
    scanf("%d", &N);
    
    // Check if you can buy a Punjabi
    if (N > 1000) {
        printf("I will buy Punjabi\n");
        
        // After buying Punjabi, calculate remaining money
        N -= 1000;
        
        // Check if you can buy new shoes
        if (N >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
        printf("Bad luck!\n");
    }
    
    return 0;
}
