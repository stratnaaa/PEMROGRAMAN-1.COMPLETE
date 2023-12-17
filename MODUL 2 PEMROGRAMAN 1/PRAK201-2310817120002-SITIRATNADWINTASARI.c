#include <stdio.h>
#include <string.h>
int main (){

    char nama[30], nim[30], kls[30], ttl[30], alm[30], hby[30], nohp[30];
    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                  : "); 
    fgets(nim, sizeof(nim), stdin);
    
    printf("Kelas Paralel        : "); 
    fgets(kls, sizeof(kls), stdin);

    printf("Tempat/Tanggal Lahir : "); 
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat               : "); 
    fgets(alm, sizeof(alm), stdin);

    printf("Hobby                : "); 
    fgets(hby, sizeof(hby), stdin);

    printf("No.HP                : "); 
    fgets(nohp, sizeof(nohp), stdin);

    printf("\n");
    
    printf("Nama                 : %s", nama);
    printf("NIM                  : %s", nim);
    printf("Kelas Paralel        : %s", kls);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat               : %s", alm);
    printf("Hobby                : %s", hby);
    printf("No.HP                : %s", nohp);
    return 0;
}