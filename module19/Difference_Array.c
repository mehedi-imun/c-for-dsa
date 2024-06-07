#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];

        // Read array A
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i]; // Make a copy of array A
        }

        // Sort array B in ascending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    // Swap B[j] and B[j+1]
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // Calculate absolute differences and store in array C
        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

    
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
