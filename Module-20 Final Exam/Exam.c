#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;  
        scanf("%d", &N);

        char results[N + 1];  //
        scanf("%s", results);

        int tigerWins = 0;
        int pathanWins = 0;

        
        for (int i = 0; i < N; i++) {
            if (results[i] == 'T') {
                tigerWins++;
            } else if (results[i] == 'P') {
                pathanWins++;
            }
        }

        if (tigerWins > pathanWins) {
            printf("Tiger\n");
        } else if (pathanWins > tigerWins) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
