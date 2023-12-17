#include <stdio.h>
#include <math.h>

int main (){
    int alas, tinggi, simi;
    alas = 5;
    tinggi = 12;
    //Mencari sisi miring menggunakan rumus pythagoras
    simi = sqrt(pow(alas, 2) + pow(tinggi, 2));
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", simi);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n",tinggi + alas + simi);
    printf("Luas = %d cm\n", alas * tinggi / 2);
    return 0;
}