#include <stdio.h>
int main(){
    //Panjang sisi segitiga
    int a,b,c,kt,hrt;
    a = 4;
    b = 5;
    c = 7;
    //Keliling tanah Pak Dengklek
    kt = a + b + c;
    //Harga tanah per meter
    hrt = 85000;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kt);
    printf("Harga tanah Per Meter adalah %d\n", hrt);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", kt * hrt);
    return 0;
}