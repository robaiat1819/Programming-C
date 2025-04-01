#include <stdio.h>

void printRecursion(int n) {
    if (n > 0) {
        printf("I love Recursion\n");
        printRecursion(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    // Call the recursive function
    printRecursion(N);
    
    return 0;
}
