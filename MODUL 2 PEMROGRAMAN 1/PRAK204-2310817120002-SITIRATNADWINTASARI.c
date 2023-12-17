#include <stdio.h>
#include <math.h>
int main (){
    //input//
    float jari2, tinggi, v, l, k;
    scanf("%f", &jari2);
    scanf("%f", &tinggi);
    v = (22 * pow(jari2,2) * tinggi)/7;
    l = (2 * 22 * jari2 * (jari2 + tinggi))/7;
    k = (2 * 22 * jari2)/7;
    //output//
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n",k);

    return 0;
}