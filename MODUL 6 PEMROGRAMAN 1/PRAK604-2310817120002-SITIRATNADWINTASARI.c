#include <stdio.h>
#include <string.h>

int main() {
    char kode[100];  
    char pesan[100];   

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    int length = strlen(kode);
    int length2 = strlen(pesan);
    int bintang = 0;
    int pagar = 0;
        
        if (length == length2){
            for (int i = 0; i < length; i++) {
                if (kode[i] != pesan[i]) {
                    printf("#");
                    pagar++;
                } else if (kode[i] == ' ' && pesan[i] == ' ') {
                    printf(" ");
                } else {
                    printf("*"); 
                    bintang++;
                }
            }printf("\n* = %d\n", bintang);
            printf("# = %d\n", pagar);
        
            if (bintang >= pagar) {
                printf("Pesan Asli\n");
            } else {
                printf("Pesan Palsu\n");
            }
        }else{
            printf("Panjang kalimat berbeda, pesan palsu\n");
        }
    return 0;
}