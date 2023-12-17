#include <stdio.h>

int main() {
    int angka;
    scanf("%d", &angka);

    int matriks[angka];

    for (int i = 0; i < angka; i++) {
        scanf("%d", &matriks[i]);
    }

    for (int i = 0; i < angka; i++) {
        printf("%d ", matriks[i] * (i + 1));
    }

    return 0;
}
