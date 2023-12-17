#include <stdio.h>

int main() {
    int A[100][100], B[100][100], hasil[100][100], n;
    scanf("%d", &n);

    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matriks AXB:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    } return 0;
}
