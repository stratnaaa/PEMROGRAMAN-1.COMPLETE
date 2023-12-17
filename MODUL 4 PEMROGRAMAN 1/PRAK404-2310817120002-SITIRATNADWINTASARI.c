#include <stdio.h>

void clc(float *pil1, float *pil2) {
    printf("Masukkan nilai pertama: ");
    scanf("%f", pil1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", pil2);
}

int main() {
    float pil1, pil2;
    int p;
    while (1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &p);
        switch (p) {
            case 1:
                clc(&pil1, &pil2);
                printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", pil1, pil2, pil1 + pil2);
                break;
            case 2:
                clc(&pil1, &pil2);
                printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", pil1, pil2, pil1 - pil2);
                break;
            case 3:
                clc(&pil1, &pil2);
                printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", pil1, pil2, pil1 * pil2);
                break;
            case 4:
                clc(&pil1, &pil2);
                if (pil2 != 0) {
                    printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", pil1, pil2, pil1 / pil2);
                } else {
                    printf("Error: Pembagian dengan nol tidak diizinkan\n");
                }
                break;
            case 5:
                printf("Terima kasih, telah menggunakan kalkulator Ratna\n");
                return 0;
            default:
                printf("Input anda salah, silahkan coba lagi\n");
                break;
        }
    }
}
