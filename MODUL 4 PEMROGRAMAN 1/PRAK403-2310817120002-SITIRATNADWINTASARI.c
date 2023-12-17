#include <stdio.h>

int main() {
    int u, i, bil1, bil2;
    for(u = 1; u <= 4; u++){
    scanf("%d %d", &bil1, &bil2);

    for (i = bil1; i <= bil2; i++) {
        printf("%d %d", i, bil2 - (i - bil1));
        if (i < bil2) {
            printf(" - ");
     }
        }  
        for (i = bil1; i >= bil2; i--){
            printf("%d %d", i, bil2 - (i - bil1));
            if (i > bil2) {
                printf(" - ");
            }
        }
        printf("\n");
    }
     }