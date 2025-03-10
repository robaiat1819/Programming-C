#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc

int main() {
    long long int n;
    scanf("%lld", &n);

    // Allocate memory dynamically for the array
    long long int *ar = (long long int*)malloc(n * sizeof(long long int));

    // Check if memory allocation was successful
    if (ar == NULL) {
        printf("Memory allocation failed");
        return 1; // Return 1 to indicate failure
    }

    // Input elements into the array
    for (long long int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }

    long long int sum = 0;
    for (long long int i = 0; i < n; i++) {
        sum += ar[i];
        
        // If the sum becomes negative, reset it to zero
        if (sum < 0) {
            sum = 0;
        }

        // Print the cumulative sum
        printf("%lld ", sum);
    }

    // Free dynamically allocated memory
    free(ar);

    return 0;
}
