#include <stdio.h>
int main (){
    float pt, jt, kl;
    //Putaran mengeililingi taman
    pt = 5;
    //Jarak tempuh
    jt = 14;
    //Keliling taman
    kl = jt / pt;
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n",pt);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n\n",jt);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", (kl) / (2*3.14));
    return 0;
}