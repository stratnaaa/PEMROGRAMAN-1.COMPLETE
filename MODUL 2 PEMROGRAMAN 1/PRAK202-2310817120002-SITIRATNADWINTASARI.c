// TEST CASE 1 //
#include <stdio.h>
int main (){
    int nipe;
    float nike, hasil;
    
    printf("Masukkan Nilai Pertama: ");
    scanf("%d", &nipe);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nike);

    hasil = nipe + nike;
    printf("Hasil dari penjumlahan nilai pertama \"%.d\" dan nilai kedua \"%.01f\" adalah \"%.2f\"", nipe, nike, hasil);
    
// TEST CASE 2 //
    float nipe2, nike2, hasil2;
    printf ("\n\n");
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nipe2);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nike2);

    hasil2 = nipe2 + nike2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.01f\" adalah \"%.2f\"", nipe2, nike2, hasil2);
    return 0;

}